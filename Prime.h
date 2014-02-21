// Prime library
// Copyright 2014 Peter Knight
// This code is released under GPLv2 license.

#ifndef _Prime_h_
#define _Prime_h_

#include <inttypes.h>

class PrimeClass
{
	public:
		bool isPrime(uint32_t n);
		uint32_t mulMod(uint32_t a, uint32_t b, uint32_t m);
		uint32_t powMod(uint32_t a, uint32_t b, uint32_t m);
	private:
		bool sprp(uint32_t a, uint32_t b);
};
extern PrimeClass Prime;

#endif
