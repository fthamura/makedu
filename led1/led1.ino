
const int LED1 = 1;
const int LED2 = 2;
const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);

 }

void loop() {
  // put your main code here, to run repeatedly:
  delay(300);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
   delay(300);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
   delay(300);
    digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
    delay(300);
   digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
   delay(300);
    digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(300);
    digitalWrite(LED5, LOW);

}
