// Prime library
// Copyright 2014 Peter Knight
// This code is released under GPLv2 license.
//
// Welcome to the Prime library examples.
//
// Prime is a set of utilities for finding and playing with prime numbers.
//

#include <Prime.h>

void setup() {
  Serial.begin(57600);
}

void loop() {
  // Start at zero
  unsigned long prime=0;
  while(1) {
    prime++;
    // Skip past all the numbers that are not prime
    while (!Prime.isPrime(prime)) prime++;
    // And print the primes
    Serial.println(prime);
  }
}