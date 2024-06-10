#include "beat_model.h"
#include "beat_controller.h"
#include "dj_view.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    BeatModel model;
    BeatController controller(&model);

    controller.start();

    std::this_thread::sleep_for(std::chrono::seconds(3));

    controller.increaseBPM();
    controller.setBPM(120);

    std::this_thread::sleep_for(std::chrono::seconds(3));

    controller.stop();

    return 0;
}
