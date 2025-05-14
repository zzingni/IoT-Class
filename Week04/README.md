## I2C 통신 실습 : LCD 출력 및 Wire 주소 찾기
I2C통신을 이용해 LCD 화면에 "Hello, World"를 출력하고, I2C 장치의 주소를 찾는 실습 진행

## 사용 환경
- Arduino Uno
- I2C LCD(16*2)
- Wires

## 실습 내용
**1.LCD에 Hello, World 출력** <br><br>
아두이노와 I2C LCD를 연결한 후, LCD에 "Hello, Wolrd" 텍스트 출력
Wire 라이브러리와 LiquidCrystal_I2C 라이브러리를 사용하여 I2C 장치와 통신.<br><br>

**2. I2C 장치 주소 찾기** <br><br>
I2C 버스에 연결된 장치들의 주소를 자동으로 찾는 방법 실습
Wire 라이브러리의 beginTransmission()과 endTransmission() 함수를 활용해 I2C 주소를 스캔하고 출력하는 방식으로 장치 주소 확인
