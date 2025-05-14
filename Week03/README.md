## influxDB와 아두이노를 활용한 미세먼지 측정
아두이노와 미세먼지 센서를 활용해 실시간으로 값을 측정하고, InfluxDB에 데이터를 저장하여 시각화 함.
</br>

## 실습 환경
- Arduino Uno
- 미세먼지 센서
- InfluxDb
- USB케이블, 브레드보드, 점퍼 와이어 등

## 데이터 전송 흐름
[미세먼지 센서] → [아두이노 (USB 연결)] → [PC (시리얼 데이터 수신)] → [PC에서 InfluxDB로 업로드]
</br>

## InfluxDB란?
시계열(TIme-Series) 데이터베이스(TSDB, Time_Series Database), 시간에 따라 변화하는 데이터를 효과적으로 저장하고 관리하는 데 최적화된 데이터베이스
<br>

## InfluxDB의 주요 특징
- 시계열 데이터 저장
- 고속 데이터 삽입 및 검색
- SQL과 비슷한 질의(Query) 언어 지원
- 태그(Tag) 기반 데이터 저장
</br>

## InfluxDB 설치경로
https://docs.influxdata.com/influxdb/v2/install/?t=Windows
</br>

