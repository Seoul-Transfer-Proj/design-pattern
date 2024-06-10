#ifndef BEAT_MODEL_H
#define BEAT_MODEL_H

#include "beat_model_interface.h"
#include "beat_observer.h"
#include "bpm_observer.h"
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>
#include <algorithm>

class BeatModel : public BeatModelInterface {
private:
    std::vector<BeatObserver*> beatObservers;
    std::vector<BPMObserver*> bpmObservers;
    int bpm;
    bool stop;
    std::thread thread;
    std::mutex mtx;

    void playBeat() {
        std::cout << "Playing beat" << std::endl;
    }

    void notifyBeatObservers() {
        for (auto observer : beatObservers) {
            observer->updateBeat();
        }
    }

    void notifyBPMObservers() {
        for (auto observer : bpmObservers) {
            observer->updateBPM();
        }
    }

    void run() {
        while (!stop) {
            playBeat();
            notifyBeatObservers();
            std::this_thread::sleep_for(std::chrono::milliseconds(60000 / bpm));
        }
    }

public:
    BeatModel() : bpm(90), stop(false) {}

    void initialize() override {
        std::cout << "Initializing BeatModel" << std::endl;
    }

    void on() override {
        bpm = 90;
        stop = false;
        if (thread.joinable()) {
            thread.join();
        }
        thread = std::thread(&BeatModel::run, this);
    }

    void off() override {
        stop = true;
        if (thread.joinable()) {
            thread.join();
        }
    }

    void setBPM(int bpm) override {
        {
            std::lock_guard<std::mutex> lock(mtx);
            this->bpm = bpm;
        }
        std::cout << "BPM set to " << bpm << std::endl;
        notifyBPMObservers();
    }

    int getBPM() override {
        std::lock_guard<std::mutex> lock(mtx);
        return bpm;
    }

    void registerBeatObserver(BeatObserver* o) override {
        beatObservers.push_back(o);
    }

    void removeObserver(BeatObserver* o) override {
        beatObservers.erase(std::remove(beatObservers.begin(), beatObservers.end(), o), beatObservers.end());
    }

    void registerBPMObserver(BPMObserver* o) override {
        bpmObservers.push_back(o);
    }

    void removeObserver(BPMObserver* o) override {
        bpmObservers.erase(std::remove(bpmObservers.begin(), bpmObservers.end(), o), bpmObservers.end());
    }
};

#endif // BEAT_MODEL_H
