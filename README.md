This example shows how to use analog value to control a digital PWM output.
The value read from the potentiometer is remapped from 0-1024 to 0-255 in order to dimmer the led.
The resistor is mandatory on the potentiometer in order to avoid short circuit when rotating it.

Look at the Serial.println: it is different.
When you need to write different variable in the same row, you can transform all of that in string with the function String, and print all togheter collating them with the '+'.

![Arduinoo circuit](https://github.com/HeS2021/analogInputOutput/blob/main/Incredible%20Wolt-Maimu%20(1).png "Arduino Circuit with potentiometer and led")
