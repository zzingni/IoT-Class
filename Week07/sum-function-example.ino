int a1 = 2;
int a2 = 3;
int a3;

void setup() {
  Serial.begin(115200);
  Serial.println();

  sum(a1, a2, a3);
  Serial.println(a3);

}

void loop() {

}

// 아래 a,b,c 는 매개 변수(parameter)임
void sum(int a, int b, int& c) {
  c = a + b;
}
