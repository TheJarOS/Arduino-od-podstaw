void setup() {
  Serial.begin(9600);
  while(!Serial){
    ;}
  Serial.print("Start!\n");
}

void loop() {
  Serial.println("Minela sekunda");
  delay(1000);
}
