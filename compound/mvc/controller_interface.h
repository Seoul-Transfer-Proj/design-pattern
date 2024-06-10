#ifndef CONTROLLER_INTERFACE_H
#define CONTROLLER_INTERFACE_H

class ControllerInterface {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void increaseBPM() = 0;
    virtual void decreaseBPM() = 0;
    virtual void setBPM(int bpm) = 0;
    virtual ~ControllerInterface() {}
};

#endif
