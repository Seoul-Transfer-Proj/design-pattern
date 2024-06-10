# C++로 이해하는 디자인 패턴 

## Overview

아래 서적에서 소개하는 각 디자인 패턴들을 C++을 통해 구현해보며 이해하기 위한 레포입니다.

- 참고 서적:[헤드 퍼스트 디자인 패턴](https://m.hanbit.co.kr/store/books/book_view.html?p_code=B6113501223)

## 빌드 환경

- OS: macOS sonoma (version 14.2)
- Compiler: Apple clang version 15.0.0 (clang-1500.3.9.4)
- Kernal Version: Darwin Kernel Version 23.2.0
- Architecture: ARM64 
- IDE: Visual Studio Code
- Language: C++ 11 standard

## 빌드 및 실행 방법

1. 해당 레포 clone
2. 파트 별로 다음 명령어를 통해 실행 가능.

- part1: 
  - duck 예제
    - 현재 디렉토리를 part1/adventure_game으로 이동 > 터미널에서 다음 명령어 입력
    - g++ -std=c++11 -o adventure_game adventure_game.cpp
    - ./adventure_game
  - adventure 예제
    - g++ -std=c++11 -o adventure adventure.cpp
    - ./adventure 
- part2: 현재 디렉토리를 part2/weather_measurement로 설정 > 터미널에서 다음 명령어 입력
  - g++ -std=c++11 -o weather_station weather_station.cpp weather_data.cpp subject.cpp current_display.cpp ./displayment/forecast.cpp
  - ./weather_station 
- part3: pwd > inheritance 폴더 > 다음 명령어 입력 
  - g++ -std=c++11 -o main main.cpp ./condiment/beverage_size.cpp ./const/size.cpp
  - ./main

- part4: pwd > factory_pattern > 다음 명렁어 입력
  - g++ -std=c++11 -o main main.cpp pizza_store.cpp pizza.cpp
  - ./main

### 관련 아티클

#### 디자인 패턴 
- [C++로 전략 패턴 구현하기](https://velog.io/@changhwan77/design-pattern-1)
- [C++로 Observer Pattern 구현해보기](https://velog.io/@changhwan77/C%EB%A1%9C-Observer-Pattern-%EA%B5%AC%ED%98%84%ED%95%B4%EB%B3%B4%EA%B8%B0)
- [C++로 Decorating Pattern 이해하기](https://velog.io/@changhwan77/C%EB%A1%9C-Decorating-Pattern-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B8%B0)
- [C++로 템플릿 패턴 이해하기](https://velog.io/@changhwan77/C로-템플릿-패턴-이해하기)
- [C++로 커맨드 패턴 이해하기](https://velog.io/@changhwan77/C로-커맨드-패턴-이해하기)
- [C++로 Adapter & Facade 패턴 이해하기](https://velog.io/@changhwan77/C로-Adapter-Facade-패턴-이해하기)

#### C++로 객체지향 개념 이해
- [C++로 Polymorphism과 가상 함수 이해하기](https://velog.io/@changhwan77/C로-Polymorphism과-가상-함수-이해하기)
- [구조체와 클래스의 차이점](https://velog.io/@changhwan77/구조체와-클래스의-차이점)
- [객체의 생명 주기](https://velog.io/@changhwan77/동적-객체-생성)
