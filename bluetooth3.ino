 #include <SoftwareSerial.h>
 
SoftwareSerial BT(10, 11); 
void setup()  
{
  // set digital pin to control as an output
  
  // set the data rate for the SoftwareSerial port
  Serial.begin(9600);
  BT.begin(9600);
  // Send test message to other device
  // BT.println("Hello from Arduino");
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
int a,b; // stores incoming character from other device

void loop() 
{
  delay(1000);
  a=BT.read();
  //b=Serial.read();
  switch (a) {
      case 'A':
        digitalWrite(2, HIGH);
        break;
      case 'B':
        digitalWrite(3, HIGH);
        break;
      case 'C':
        digitalWrite(4, HIGH);
        break;
      case 'D':
        digitalWrite(5, HIGH);
        break;
      case 'a':
        digitalWrite(2, 0);
        break;
      case 'b':
        digitalWrite(3, 0);
        break;
      case 'c':
        digitalWrite(4, 0);
        break;
      case 'd':
        digitalWrite(5, 0);
        break;
      default:
     BT.println("Please enter A to D only");
  }
  Serial.println(a);
}
