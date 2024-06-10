#ifndef BPM_OBSERVER_H
#define BPM_OBSERVER_H

class BPMObserver {
public:
    virtual void updateBPM() = 0;
    virtual ~BPMObserver() {}
};

#endif
