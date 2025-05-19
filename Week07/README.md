## Led_Toggle - 객체지향 기반 실습(클래스 설계하여 사용하기)
Arduino에서 LED를 깜빡이기 위한 클래스를 정의하고 사용하는 실습을 진행하였다.

## 파일 구성
- LedToggle.h : LED 제어용 클래스 헤더 파일
- LedToggle.cpp : 클래스 메서드 구현
- LedToggle.ino : Arduino 테스트 코드

## 아두이노 파일구조
1. ifndef : if not defined를 줄인 말. 처음 #include 한 후부터는 #ifndef가 거짓이 되므로, #include는 동작하지 않는다.
2. define
3. endif


## 클래스 정의
*class 명령어 사용*
```
class class_name {
  public:
  // constructor
  class_name();
  class_name(argument_list);;

  // 메소드 선언

  private:

  // 내부 사용 변수 선언

}; // {} 끝에 ;이 있음
```

## 범위 지정 연산자(::)
- class문 밖에서 클래스에 속한 메소드를 작성할 때는 이름 앞에 class_name::을 붙여 클래스의 소속을 표시한다.
- 범위 지정 연산자(::) 사용을 제외하면 메소드 작성과 일반 함수 작성은 똑같다.
