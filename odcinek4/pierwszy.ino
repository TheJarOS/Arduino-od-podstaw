/* 
12.04.2015 Mateusz Jaros/The JarOS

///////////////////////////////////////
LEDy podłączone przez rezystory pod piny cyfrowe w Arduino od 0 do 13
*/

int numerPinu = 0;
void setup() {
  while(numerPinu < 14){
    pinMode(numerPinu, OUTPUT); // ustawianie pinów jako wyjście
    // obie formy są poprawne:
    //numerPinu = numerPinu +1; 
    numerPinu++; 
  }
}

void loop() {
  numerPinu = 0;
  while(numerPinu < 14){
    digitalWrite(numerPinu, HIGH); // zapalnie po kolei LEDów 
    numerPinu++;
    delay(1000);
  }
  delay(1000);
  do {
    digitalWrite(numerPinu, LOW); // gaszenie po kolei LEDów
    numerPinu--;
    delay(1000);
  }while(numerPinu >= 0);
  delay(1000);
}
