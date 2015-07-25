char reading;
void setup() {
  Serial.begin(9600);
  while(!Serial) ;
  Serial.println("Start");
 }

void loop() {
  if(Serial.available() > 0) {
    reading = Serial.read();
    Serial.print("Odebrano: ");
    Serial.println(reading);
  }
}
