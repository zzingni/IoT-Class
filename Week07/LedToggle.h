#ifndef LedToggle_h  // 라이브러리를 중복으로 포함시켰을 때 그걸 방지해주는 역할. (중복방지) > 두번째 호출하면 이게 false 됨
#define LedToggle_h

#include "Arduino.h" // 기본적으로 아두이노에서 사용할 수 있는 함수같은 것들을 import (pinMode 같은거)

class LedToggle {
    public:
        LedToggle(int pin); // 생성자
        LedToggle(int pin, unsigned long delayTime); // 추가 문장
        void toggle();      // LED 상태 토글
    
    private:
        int _pin;
        bool _state;
        unsigned long _delayTime; // 추가 문장
};

#endif
