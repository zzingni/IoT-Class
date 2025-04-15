#include "LedToggle.h"

LedToggle::LedToggle(int pin) { // 클래시이름::컨스트럭쳐구현
    _pin = pin;
    _state = false;
    _delayTime = 0; // 추가 문장 > 이게 중요. 기존에 pin만 받으면 delay 디폴트 값 정해주는 것. 이런 걸 잘 해야 함... 중요!
                    // 얘를 0으로 줘버리면 arduino 실제 코드 작성할 때 delay() 사용해야 함.
    pinMode(_pin, OUTPUT); // 여기서 pinMode를 쓸 수 있는 이유는 헤더파일에서 아두이노를 include 했기 때문임.
    digitalWrite(_pin, LOW);
 }

LedToggle::LedToggle(int pin, unsigned long delayTime) {
    _pin = pin;
    _state = false;
    _delayTime = delayTime;
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, LOW);
}
// delayTIme이 안 넘어왔을 떄를 고민해봐야 함 > 기본값을 넣어주는 작업이 중요

void LedToggle::toggle() {

    if (_delayTime > 0) {
        delay(_delayTime);
    }
    _state = !_state;
    digitalWrite(_pin, _state ? HIGH : LOW); // 해당 핀을 _state 가 true면 HIGH false면 LOW
}

