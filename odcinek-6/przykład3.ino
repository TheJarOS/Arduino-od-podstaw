const int pin1 = 2;
const int pin2 = 3;
const int pin3 = 4;
const int pin4 = 5;

char znak;
boolean stan1 = false;
boolean stan2 = false;
boolean stan3 = false;
boolean stan4 = false;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);

  Serial.begin(9600);
  
}

void loop() {
  if(Serial.available() > 0){
    znak = Serial.read();
    if(znak == '1'){
        stan1 = !stan1;
        digitalWrite(pin1, stan1);
    }else if(znak == '2'){
        stan2 = !stan2;
        digitalWrite(pin2, stan2);
    }else if(znak == '3'){
        stan3 = !stan3;
        digitalWrite(pin3, stan3);
    }else if(znak == '4'){
        stan4 = !stan4;
        digitalWrite(pin4, stan4);
    }else {
        Serial.print("Stany: ");
        Serial.print(stan1);
        Serial.print(" ");
        Serial.print(stan2);
        Serial.print(" ");
        Serial.print(stan3);
        Serial.print(" ");
        Serial.println(stan4);
    }
  }

}
