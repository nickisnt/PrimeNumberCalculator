# PrimeNumberCalculator
For fun I wanted to write a prime number calculator and see how much I could optimize the runtime. This is an ongoing experiment.

I'm using gcc as the compiler and am using the -Ofast optimization flag. Finding primes between 1 and 10,000,001 takes 1 minute and 2 seconds on the M1 Macbook pro currently.

gcc -Ofast -o prime prime.c
