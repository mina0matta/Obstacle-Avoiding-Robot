#include <Servo.h>
Servo myservo;
int echopin=11;
int trigpin=12;
int Right_speed=3;
int Left_speed=5;
int left_m_1=7;
int left_m_2=8;
int right_m_1=9;
int right_m_2=10;
long duration;
int distance;
/****************************************************/
void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(Right_speed,OUTPUT);
  pinMode(Left_speed,OUTPUT);
  pinMode(left_m_1,OUTPUT);
  pinMode(left_m_2,OUTPUT);
  pinMode(right_m_1,OUTPUT);
  pinMode(right_m_2,OUTPUT);
  myservo.attach(6);
}
/****************************************************/
void loop() {
  
  myservo.write(90);
  distance = look();
  if (distance>40)
  {
    forward();
  }
  else if(distance < 40 )
  {
     Stop();
     myservo.write(180);
     delay(500);
     distance=look(); 
     if (distance>40)
     {
      t_left();
      delay(800);
     }
     else if(distance < 40)
     {
       myservo.write(0);
       delay(500);
       distance=look();
       if(distance>40)
       {
           t_right();
           delay(800);
       }
       else if(distance < 40)
       {
         backward();
         delay(1000);
       }
     }
  }
}   
   
/******************  Backward  ***********************/
void backward()
{ analogWrite(Right_speed,255);
  analogWrite(Left_speed,255);
  digitalWrite(right_m_1,HIGH);     // right motor
  digitalWrite(right_m_2,LOW);
  
  digitalWrite(left_m_1,HIGH);     // left motor
  digitalWrite(left_m_2,LOW);
}
/*****************  Forward  ***********************/
void forward()
{ analogWrite(Right_speed,120);
  analogWrite(Left_speed,180);
  digitalWrite(right_m_1,LOW);     // right motor
  digitalWrite(right_m_2,HIGH);
  
  digitalWrite(left_m_1,LOW);     // left motor
  digitalWrite(left_m_2,HIGH);
}
/********************  Stop  ************************/
void Stop()
{ digitalWrite(right_m_1,LOW);     // right motor
  digitalWrite(right_m_2,LOW);
  
  digitalWrite(left_m_1,LOW);     // left motor
  digitalWrite(left_m_2,LOW);
}
/********************  Look  ************************/
long look()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  long cm = (duration/2)*0.034;
  return cm;
}
/***************** Turn Left  ***********************/
void t_left()
{
  analogWrite(Right_speed,200);
  analogWrite(Left_speed,80);
  
  digitalWrite(right_m_1,LOW);     // right motor
  digitalWrite(right_m_2,HIGH);
  
  digitalWrite(left_m_1,LOW);     // left motor
  digitalWrite(left_m_2,HIGH);
}
/****************  Turn Right   ***********************/
void t_right()
{ 
  analogWrite(Right_speed,60);
  analogWrite(Left_speed,200);
  
  digitalWrite(right_m_1,LOW);     // right motor
  digitalWrite(right_m_2,HIGH);
  
  digitalWrite(left_m_1,LOW);     // left motor
  digitalWrite(left_m_2,HIGH);
}
/******************* Servo Angle  *********************/
void servo_angle(int x)
{
  myservo.write(x);
}
