/* Robo car
devoloped by http://www.ecebots.in */

#include<ecebotsrobo.h>
robo go(3,5,255);//select left motor pin, right motor pin, speed
                //left and right motor pin can be 3/5/6/9/10/11
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
go.front();
delay(5000);//move front for 5 seconts
go.left();
delay(1000);//move left for 1 second
go.front();
delay(5000);//move front for 5 second
go.right();
delay(1000);//move right for 1 second
go.front();
delay(5000);//move front for 5 seconds
go.stop();//stop
}