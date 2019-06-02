//char Si gnal[4]="HIGH";
int signalme=1;
int i=2;
void setup() {
  // put your setup code here, to run once:
  
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
if(i<10){
digitalWrite(i,signalme);
}
else
{
  if(signalme==1){
    signalme=0;
  }
  else
  {
    signalme=1;
  }
    
  i=0;
}
i++;
}


