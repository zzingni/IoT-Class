// C++ code
//

#define TRIG 12 // TRIG 핀
#define ECHO 11 // ECHO 핀

int led_r = 7; //  setup이나 loop 함수 안에 생성하면 지역변수가 되기 때문에 밖에서 선언 및 초기화
int led_g = 10;

// 시리얼 : 
  void setup()
{
  Serial.begin(9600); 
    // 괄호안은 속도 > 낮을수록 안정적으로 통신하지만 속도는 느림
    // 항상 괄호 안 속도와 시리얼 속도를 맞춰줘야 함
  pinMode(led_g, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(TRIG, OUTPUT); // 아두이노에서 > 초음파 보내! 신호 보내야되기 때문에 output
  pinMode(ECHO, INPUT); // 읽는거기때문에 input 
}

void loop()
{
  long duration, distance; // 4byte
  
  digitalWrite(TRIG, LOW); // 트리거의 신호를 초기화해줌 > 혹시나 다시 돌았을 떄 트리거핀이 HIGH 로 되어있을 수 있으니 LOW로
  
  delayMicroseconds(2); // delay(2) > 0.002초
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); // 센서로 보낸 후 에코로 돌아오는 데까지 10마이크로 > 데이터시트에서 정해진 수치임.
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH); // 중요 > 의미 제대로 이해하기
  // 하이 > 로우 / 로우 > 하이 변하는 시간 측정하는 함수
  // 트리거핀에서 쏘고 에코핀으로 들어오는 순간 high 로 되는 것 측정
  distance = duration * 17 / 1000; // microseconds 단위로 해서 / 1000 한것.
  Serial.println(duration);
  Serial.print("\nDistance");
  Serial.print(distance);
  Serial.println(" CM");
  
  // Serial.println("11111");
  digitalWrite(led_r, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_r, LOW);// 숫자 부분은 변수도 가능
  delay(1000); 
  digitalWrite(led_g, HIGH);
  delay(1000);
  digitalWrite(led_g, LOW);
  delay(1000);
}
