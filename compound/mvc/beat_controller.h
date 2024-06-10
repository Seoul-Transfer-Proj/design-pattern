#ifndef BEAT_CONTROLLER_H
#define BEAT_CONTROLLER_H

#include "controller_interface.h"
#include "beat_model_interface.h"
#include "dj_view.h"

class BeatController : public ControllerInterface {
private:
    BeatModelInterface* model;
    DJView* view;

public:
    BeatController(BeatModelInterface* model) {
        this->model = model;
        view = new DJView(this, model);
        view->createView();
        view->createControls();
        view->disableStopMenuItem();
        view->enableStartMenuItem();
        model->initialize();
    }

    void start() override {
        model->on();
        view->disableStartMenuItem();
        view->enableStopMenuItem();
    }

    void stop() override {
        model->off();
        view->disableStopMenuItem();
        view->enableStartMenuItem();
    }

    void increaseBPM() override {
        int bpm = model->getBPM();
        model->setBPM(bpm + 1);
    }

    void decreaseBPM() override {
        int bpm = model->getBPM();
        model->setBPM(bpm - 1);
    }

    void setBPM(int bpm) override {
        model->setBPM(bpm);
    }
};

#endif
