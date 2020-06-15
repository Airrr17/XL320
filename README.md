Modified for use with STM32 not involving HalfDuplexHardwareSerial.h
Verified on STM32 BluePill board
Serial2: PA2-TX PA3-RX PA1-DIR
Direction pin is hardcoded in XL320.cpp (four lines) for getJointPosition command only.
As hardware part you can use a common shcematic based on 74hc241 or provided MAX485.



Dynamixel XL-320
================

<img src="http://hackerspace-adelaide.org.au/w/images/0/03/XL320-arduino-library.jpg" width="100%" alt="Dynamixel XL-320 servo library for Adruino" title="Dynamixel XL-320 servo library for Adruino">

## A Servo library for Arduino

Clone this repository into your Arduino libraries folder:

``` $ cd ~/Documents/Arduino/libraries/ ```

Restart Arduino app. :-)

Open the example Arduino sketch to see how it works:

``` File > Examples > XL320 > XL320_servo_example ```

### Hardware

[DYNAMIXEL XL-320 servo manual](http://support.robotis.com/en/product/dynamixel/xl-320/xl-320.htm) including specifications and message sending addresses.

### Wiring diagram

Looking from above, with the servo head at the top, wire the left plug of the servo to:

* PIN1: GND
* PIN2: 5 volts
* PIN3: Serial TX

![Dynamixel XL-320 wiring diagram](http://hackerspace-adelaide.org.au/w/images/f/f0/XL320-wiring.png)

### Setting the servo serial baud rate & servoID

We've included some example sketches to help test and setup your servos. Out of the box they're set to communicate via serial at 1Mbps, so you might want to set them down to something more managable by Arduino at 115200.

Follow the instructions in the sketch ```XL320_servo_set_baud_rate_or_id.ino``` and don't forget to power cycle the servos in between setting anything.

Note: when setting the ServoID, the servos default down to 9600 baud, so after you set the servoID you'll need to set the baud rate back up to 115200.

### More information

Read more about this library on the [Hackerspace Adelaide Wiki](http://hackerspace-adelaide.org.au/wiki/Dynamixel_XL-320)