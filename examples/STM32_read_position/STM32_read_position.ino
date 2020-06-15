#include "XL320.h"                            //Smart Digital Servos


XL320 servo;
char rgb[] = "rgbypcwo";
int pos = 0;

void setup() {
  Serial.begin(115200);     //USB-debug
  delay(1500);
  Serial.println("Start");
  Serial2.begin(1000000);             // XL-320
  servo.begin(Serial2);               // XL-320

  pinMode(PA1, OUTPUT);              //
  gpio_write_bit(GPIOA, 1, 1);        //toServo, just in case

  servo.setJointTorque(1, 250);                                               // 1023 full
  servo.setJointSpeed(1, 200);                                                // 1023-Full speed
  // servo.moveJoint(1, 500);
  delay(1000);

}


void loop() {
  for ( unsigned int p = 0; p < 1023; p++) {

    servo.LED(1, &rgb[random(0, 7)]);
    servo.moveJoint(1, p);
    delay(200);

    pos = servo.getJointPosition(1);

    Serial.print("position:"), Serial.println(pos);

    delay(1000);
  }

}
