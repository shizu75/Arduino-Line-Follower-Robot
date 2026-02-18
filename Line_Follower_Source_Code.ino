#define enA 5 //Enable1 L293 Pin enA
 #define in1 6 //Motor1  L293 Pin in1
 #define in2 7 //Motor1  L293 Pin in2
 #define in3 9 //Motor2  L293Pin in3
 #define in4 10 //Motor2  L293 Pin in4
 #define enB 8 //Enable2 L298 Pin enB
 #define R_S 12 // Right sensor
 #define L_S 13 // Left sensor

void setup() {
  Serial.begin(9600);
  pinMode(R_S, INPUT);
  pinMode(L_S, INPUT);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);
  analogWrite(enA, 250);
  analogWrite(enB, 130);
  Serial.begin(9600);

}

void loop() 
{
  if(digitalRead(L_S) == 0 && digitalRead(R_S) == 0){
        analogWrite(in1, 110); 
        digitalWrite(in2, LOW); 
        analogWrite(in3, 90); 
        digitalWrite(in4, LOW);
      }

      else if(digitalRead(L_S) == 0 && digitalRead(R_S) == 1){
            analogWrite(in1, 110); 
            digitalWrite(in2, LOW); 
            digitalWrite(in3, LOW); 
            digitalWrite(in4, LOW);
      }

      else if(digitalRead(L_S) == 1 && digitalRead(R_S) == 0){
            digitalWrite(in1, LOW); 
            digitalWrite(in2, LOW); 
            analogWrite(in3, 90); 
            digitalWrite(in4, LOW);
      }

      else{
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
      }
  }
