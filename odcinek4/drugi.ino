/* 
12.04.2015 Mateusz Jaros/The JarOS 

///////////////////////////////////////
LEDy podłączone przez rezystory pod piny cyfrowe w Arduino od 0 do 13
*/
void setup() {
  for(int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT); // ustawianie pinów 0-13 jako wyjście
  }
}

void loop() {
  int a;
  for(a = 0; a <= 14; a++) {  
    digitalWrite(a, HIGH); // zapalanie LEDów, których piny odpowiadają aktualnej wartości zmiennej a
    digitalWrite(a-1, LOW);// gaszenie LEDów, których piny mają wartość o jedne mniejszą niż zmienna a 
    delay(500);
  }
  delay(500);
  for(a = 13; a >= 0; a--) {
    digitalWrite(a, HIGH); // zapalanie LEDów, których piny odpowiadają aktualnej wartości zmiennej a
    digitalWrite(a+1, LOW); // gaszenie LEDów, których piny mają wartość o jedne mniejszą niż zmienna a 
    delay(500);
  }
  delay(500);
}
