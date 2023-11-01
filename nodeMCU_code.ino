int inputpin_R=12;  
int val1=0;
int val2=0;
int enB=15;
int in3 = 13;
int in4 = 14;
int enA=5;
int in1 = 4;
int in2 = 0;
int inputpin_L=16; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(inputpin_R,INPUT);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(inputpin_L,INPUT);

}

void loop() {
  Serial.print('a');
  // put your main code here, to run repeatedly:
  val1=digitalRead(inputpin_R);
  val2=digitalRead(inputpin_L);
  delay(100);
  if(val1==HIGH){
    Serial.print(val1);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enB, 255);
    delay(500);    
  }
  if(val1==LOW){
    Serial.print(val1);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enB, 255);
    delay(500); 
  }
  
  if(val2==HIGH){
    Serial.print(val2);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 255);
    delay(500);    
  }
  if(val2==LOW){
    Serial.print(val2);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 255);
    delay(500); 
  }
}