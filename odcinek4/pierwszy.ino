int numerPinu = 0;
void setup() {
  // put your setup code here, to run once:
  while(numerPinu < 14){
    pinMode(numerPinu, OUTPUT);
    //numerPinu = numerPinu +1;
    numerPinu++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  numerPinu = 0;
  while(numerPinu < 14){
    digitalWrite(numerPinu, HIGH);
    numerPinu++;
    delay(1000);
  }
  delay(1000);
  do {
    digitalWrite(numerPinu, LOW);
    numerPinu--;
    delay(1000);
  }while(numerPinu >= 0);
  delay(1000);
}
