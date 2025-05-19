#include <SimpleTimer.h>

SimpleTimer timerCnt; // SimpleTimer 클래스로 timerCnt 인스턴스 생성 
unsigned long loopCnt;

void timerCntFunc() {
  Serial.println(loopCnt);
  loopCnt = 0;
}

void setup() {
  Serial.begin(115200);
  Serial.println();

  timerCnt.setInterval(1000, timerCntFunc); // milli-sec, func >> 주기마다 timerCuntFunc 함수 호출 (헤더파일에 그렇게 지정되어 있음)

}

void loop() {
  timerCnt.run();
  loopCnt++; 
}
