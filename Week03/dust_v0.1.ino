int vo = A0;
int v_led = 10; // 디지털 핀 번호

float vo_value = 0;
float voltage = 0;
float dustDensity = 0;


void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(v_led, OUTPUT);
  pinMode(vo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(v_led, LOW); // 여기선 적외선 센서 LOW 가 키는 것!!!!!!!!!
  delayMicroseconds(280);
  vo_value = analogRead(vo);
  delayMicroseconds(40);
  digitalWrite(v_led, HIGH);
  delayMicroseconds(9680);

  voltage = vo_value * 5.0 / 1023.0;
  dustDensity = (voltage - 0.5)/0.005;

  // Serial.print("dust = %f \n", vo_value);
  Serial.print("dust=");
  Serial.println(dustDensity);

  delay(1000);
}
