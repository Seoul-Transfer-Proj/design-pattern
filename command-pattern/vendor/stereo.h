#ifndef STEREO_H
#define STEREO_H

#include <iostream>
using namespace std;

class Stereo {
public:
  void onForCD() { cout << "스테레오 CD 재생 시작" << endl; }
  void offForCD() { cout << "스테레오 CD 재생 중지" << endl; }
};

#endif