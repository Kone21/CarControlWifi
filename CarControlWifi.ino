#define MTR_1 4 //left
#define MTR_2 5

#define MTR_3 7 //right
#define MTR_4 6

void setup() {
  Serial.begin (115200);

  pinMode(MTR_1, OUTPUT);
  pinMode(MTR_2, OUTPUT);
  pinMode(MTR_3, OUTPUT);
  pinMode(MTR_4, OUTPUT);

}

void loop() {
  if (Serial.available() > 0){
    String inStr = Serial.readString();
    move(inStr);
  }
}

void move(String inStr) {
  if (Serial.available() > 0){
  }
  if (inStr == 'fd'){ //move forward
    digitalWrite(MTR_1, HIGH);
    analogWrite(MTR_2, 500);

    digitalWrite(MTR_3, HIGH);
    analogWrite(MTR_4, 500);
  }
  else if (inStr == 'lft'){ //turn Left
    digitalWrite(MTR_1, LOW);
    analogWrite(MTR_2, 500);

    digitalWrite(MTR_3, HIGH);
    analogWrite(MTR_4, 500);
  }
  else if (inStr == 'rgh'){ //turn Right
    digitalWrite(MTR_1, HIGH);
    analogWrite(MTR_2, 500);

    digitalWrite(MTR_3, LOW);
    analogWrite(MTR_4, 500);
  }
  else if (inStr == 'stp'){ //Stop
    digitalWrite(MTR_1, LOW);
    analogWrite(MTR_2, 0);

    digitalWrite(MTR_3, LOW);
    analogWrite(MTR_4, 0);
  }

}
