This is Prime, a prime number library for Arduino.

Quick start
-----------
Install the library in your Arduino / libraries directory.
Restart the Arduino software, and pick one of the examples from the Prime
section.

Introduction
------------
This is an implementation of various methods of prime searching. It uses two
principle methods.

For numbers under 2,500,000, it uses trial division with a dictionary of prime
numbers.

For numbers up to 4,294,967,295, it uses the Miller-Rabin test.

Prime supports all 32 bit integers. For a 64 bit implementation covering up to
18,446,744,073,709,551,615, see the companion library Prime64.

https://github.com/going-digital/Prime
https://github.com/going-digital/Prime64

Thanks
------
    MathsJam Cambridge
    Numberphile