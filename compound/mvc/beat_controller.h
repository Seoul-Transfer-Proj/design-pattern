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
// Controller 객체 형성 시 View 객체 및 model 객체 초기화
    BeatController(BeatModelInterface* model) {
        this->model = model;
        view = new DJView(this, model);
        view->createView();
        view->createControls();
        view->disableStopMenuItem();
        view->enableStartMenuItem();
        model->initialize();
    }

// View에서 Start 버튼 클릭 시 Controller의 start 메서드 호출
    void clickStartButton () {
        view->start();
    }
// model의 On 메서드 호출하며 플레이어 재생 시작
    void start() override {
        model->on();
        view->disableStartMenuItem();
        view->enableStopMenuItem();
    }

// View에서 Stop 버튼 클릭 시 Controller의 stop 메서드 호출
    void clickStopButton () {
        view->stop();
    }
// model의 off 메서드 호출하며 플레이어 재생 종료
    void stop() override {
        model->off();
        view->disableStopMenuItem();
        view->enableStartMenuItem();
    }

// 유저가 View에서 BPM을 제어할 시 호출되는 메서드
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
