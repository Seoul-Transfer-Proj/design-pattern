#ifndef DJ_VIEW_H
#define DJ_VIEW_H

#include "beat_model_interface.h"
#include "controller_interface.h"
#include "beat_observer.h"
#include "bpm_observer.h"
#include <iostream>
#include <string>

class DJView : public BeatObserver, public BPMObserver {
private:
    ControllerInterface* controller;
    BeatModelInterface* model;

public:
    DJView(ControllerInterface* controller, BeatModelInterface* model) {
        this->controller = controller;
        this->model = model;
        model->registerBeatObserver((BeatObserver*)this);
        model->registerBPMObserver((BPMObserver*)this);
    }

    void createView() {
        std::cout << "Creating view..." << std::endl;
    }

    void createControls() {
        std::cout << "Creating controls..." << std::endl;
    }

    void enableStopMenuItem() {
        std::cout << "Stop menu item enabled" << std::endl;
    }

    void disableStopMenuItem() {
        std::cout << "Stop menu item disabled" << std::endl;
    }

    void enableStartMenuItem() {
        std::cout << "Start menu item enabled" << std::endl;
    }

    void disableStartMenuItem() {
        std::cout << "Start menu item disabled" << std::endl;
    }

    void updateBPM() override {
        if (model != nullptr) {
            int bpm = model->getBPM();
            if (bpm == 0) {
                std::cout << "offline" << std::endl;
            } else {
                std::cout << "Current BPM: " << bpm << std::endl;
            }
        }
    }

    void updateBeat() override {
        std::cout << "Beat updated" << std::endl;
    }

    void setBPM(int bpm) {
        controller->setBPM(bpm);
    }

    void increaseBPM() {
        controller->increaseBPM();
    }

    void decreaseBPM() {
        controller->decreaseBPM();
    }
};

#endif
