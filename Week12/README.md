# Zigbee TinyOS 기반 온습도 센서 프로그래밍
Cygwin 환경에서 Zigbee 통신을 활용한 TinyOS 기반의 온습도 센서 시스템을 구현하고 테스트 함.


## 실습 환경
- Cygwin
- TinyOS
- TelosB 모듈
- 온도 및 습도 센서
- Zigbee



## 실습 목표
센서 데이터를 주기적으로 측정하여 Zigbee 네트워크를 통해 전송


## 실습 과정
1. Cygwin 실행
2. TestLowOneHopSht_sc 소스코드 다운 (Cygwin/home/PC 폴더에 압축 해제)
3. TestAppC.nc, Test.h, TestC.nc 코드 파일 작성
4. make telosb 명령어로 컴파일
5. Upload Fusing(kmote usb 연결 후) => make telosb install.(노드아이디)


## 파일 설명
- TestAppC.nc : 애플리케이션에 필요한 컴포넌트를 연결하는 구성 파일.
- Test.h : 센서 데이터 전송을 위한 메시지 구조체와 메시지 ID를 정의하는 헤더 파일.
- TestC.nc : 센서 측정, 타이머 제어, 메시지 전송 등의 실제 동작을 구현하는 파일.
