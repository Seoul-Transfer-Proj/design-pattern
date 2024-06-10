#include "beat_model.h"
#include "beat_controller.h"
#include "dj_view.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    BeatModel model;
    BeatController controller(&model);

    // View에서 음악 재생 버튼 클릭
    // 컨트롤러의 start() 메서드를 호출 -> model의 run() 메서드 호출
    // View에서 음악 재생 시작 버튼 disenable, 음악 재생 중지 버튼 enable
    controller.start();

    std::this_thread::sleep_for(std::chrono::seconds(3));

    // View에서 BPM 크기 증가
    // 컨트롤러가 바뀐 상태를 model에게 전달.
    controller.increaseBPM();
    controller.setBPM(120);

    std::this_thread::sleep_for(std::chrono::seconds(3));

    // View에서 BPM을 -1 하는 버튼 클릭.
    controller.decreaseBPM();

    // View에서 유저가 음악 재생 중지 버튼 클릭
    // View에서 음악 재생 시작 버튼 enable, 음악 재생 중지 버튼 disenable
    controller.stop();

    return 0;
}
