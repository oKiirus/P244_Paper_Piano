#define Buzzer 26

const int VALUE_THRESHOLD = 30;

int TOUCH_PIN_VALUE_1;
int TOUCH_PIN_VALUE_2;
int TOUCH_PIN_VALUE_3;
int TOUCH_PIN_VALUE_4;
int TOUCH_PIN_VALUE_5;

void setup(){
  
  pinMode(Buzzer, OUTPUT);
  Serial.begin(115200);
  delay(2000); 
  
  digitalWrite(Buzzer, LOW);
}

void loop(){
  
  TOUCH_PIN_VALUE_1 = touchRead(T5);
  TOUCH_PIN_VALUE_2 = touchRead(T6);
  TOUCH_PIN_VALUE_3 = touchRead(T4);
  TOUCH_PIN_VALUE_4 = touchRead(T7);
  TOUCH_PIN_VALUE_5 = touchRead(T8);
  
  Serial.print("TOUCH_PIN_VALUES 1:");
  Serial.print(TOUCH_PIN_VALUE_1);
  Serial.print("  ");
  Serial.print("TOUCH_PIN_VALUES 2:");
  Serial.print(TOUCH_PIN_VALUE_2);
  Serial.print("  ");
  Serial.print("TOUCH_PIN_VALUES 3:");
  Serial.print(TOUCH_PIN_VALUE_3);
  Serial.println(" ");
  Serial.print("TOUCH_PIN_VALUES 4:");
  Serial.print(TOUCH_PIN_VALUE_4);
  Serial.println(" ");
  Serial.print("TOUCH_PIN_VALUES 5:");
  Serial.print(TOUCH_PIN_VALUE_5);
  Serial.println(" ");
  delay(500);
  
  if(TOUCH_PIN_VALUE_1 < VALUE_THRESHOLD){
    for(int i=0; i<2; i++){
      digitalWrite(Buzzer, HIGH);
      delay(100);
      digitalWrite(Buzzer, LOW);
      delay(100);
    }
  }
  if(TOUCH_PIN_VALUE_2 < VALUE_THRESHOLD){
     for(int i=0; i<5; i++){
      digitalWrite(Buzzer, HIGH);
      delay(50);
      digitalWrite(Buzzer, LOW);
      delay(50);
    }
  }
  if(TOUCH_PIN_VALUE_3 < VALUE_THRESHOLD){
    for(int i=0; i<8; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }
  if(TOUCH_PIN_VALUE_4 < VALUE_THRESHOLD){
    for(int i=0; i<12; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }
  if(TOUCH_PIN_VALUE_5 < VALUE_THRESHOLD){
    for(int i=0; i<15; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }
  else{
    digitalWrite(2, LOW);
  }
  
}
