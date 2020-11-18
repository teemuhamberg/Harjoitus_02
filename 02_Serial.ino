void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

#define VIIVE 1000
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Morjens");
  delay(VIIVE);

}
