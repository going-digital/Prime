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

For numbers under 2500000, it uses trial division with a dictionary of prime
numbers.

For numbers up to 4294967295, it uses a series of SPRP tests (Jaeschke93), as
listed in http://primes.utm.edu/prove/prove2_3.html

Future plans
------------
    I'm working to expand this library to 64bit. This will cover numbers up to
341550071728321 (by proof Jaeschke93) and 18446744073709551615 (probable primes only).

Thanks
------
    MathsJam Cambridge
