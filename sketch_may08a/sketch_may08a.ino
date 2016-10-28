void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("hello world");
  char ch;
  int bilangan;
  float nilaiTes;

  ch = 'A';
  bilangan = 23;
  nilaiTes = 89.7;

  Serial.println(ch);
  Serial.println(bilangan);
  Serial.println(nilaiTes);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
