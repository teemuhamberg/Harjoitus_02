#define VIIVE 1000
#define LED1 5
#define LED2 6
#define LED3 7
#define LED4 8
#define Y HIGH
#define N LOW

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED1, N);
  delay(1000);
  Serial.println("LED1 OFF");
  digitalWrite (LED1, Y);
  delay(1000);
  Serial.println("LED1 ON");

  digitalWrite (LED2, N);
  delay(1000);
  Serial.println("LED2 OFF");
  digitalWrite (LED2, Y);
  delay(1000);
  Serial.println("LED2 ON");

  digitalWrite (LED3, N);
  delay(1000);
  Serial.println("LED3 OFF");
  digitalWrite (LED3, Y);
  delay(1000);
  Serial.println("LED3 ON");

  digitalWrite (LED4, N);
  delay(1000);
  Serial.println("LED4 OFF");
  digitalWrite (LED4, Y);
  delay(1000);
  Serial.println("LED4 ON");
  

}
