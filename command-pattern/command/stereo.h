#ifndef STEREOCOMMAND_H
#define STEREOCOMMAND_H

#include "command.h"
#include "../vendor/stereo.h"

class StereoOnForCD : public Command {
private:
  Stereo* stereo;
public:
  StereoOnForCD(Stereo* stereo) { this->stereo = stereo; }
  void execute() { stereo->onForCD(); }
  void undo() { stereo->offForCD(); }
};

class StereoOffForCD : public Command {
private:
  Stereo* stereo;
public:
  StereoOffForCD(Stereo* stereo) { this->stereo = stereo; }
  void execute() { stereo->offForCD(); }
  void undo() { stereo->onForCD(); }
};

#endif 