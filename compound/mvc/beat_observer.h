#ifndef BEAT_OBSERVER_H
#define BEAT_OBSERVER_H

class BeatObserver {
public:
    virtual void updateBeat() = 0;
    virtual ~BeatObserver() {}
};

#endif
