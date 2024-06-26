#ifndef BEAT_MODEL_INTERFACE_H
#define BEAT_MODEL_INTERFACE_H

class BeatObserver;
class BPMObserver;

class BeatModelInterface {
public:
    virtual void initialize() = 0;
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void setBPM(int bpm) = 0;
    virtual int getBPM() = 0;
    virtual void registerBeatObserver(BeatObserver* o) = 0;
    virtual void removeObserver(BeatObserver* o) = 0;
    virtual void registerBPMObserver(BPMObserver* o) = 0;
    virtual void removeObserver(BPMObserver* o) = 0;
    virtual ~BeatModelInterface() {}
};

#endif