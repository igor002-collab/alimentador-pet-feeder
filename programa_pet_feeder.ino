#include <Servo.h>

Servo servo_3;

void setup()
{
  servo_3.attach(3);

}

void loop()
{
  servo_3.write(0);
  delay(43200); // Wait for 3000 millisecond(s)
  servo_3.write(90);
  delay(2000); // Wait for 3000 millisecond(s)
 
}
