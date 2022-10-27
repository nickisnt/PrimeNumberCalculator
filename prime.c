#include <stdio.h>
#include <time.h>

int main(void)
{
   int currentNumber = 5;
   int currentHalfNumber = 3;
   int primesCounter = 1;
   int isPrime = 1;
   int primesA[664580] = {0};
   primesA[0] = 3;

   time_t t = time(NULL);
   struct tm startTime = *localtime(&t);
   printf("Start Time: %02d:%02d:%02d\n", startTime.tm_hour, startTime.tm_min, startTime.tm_sec);

   while (currentNumber < 10000001)
   {
      isPrime = 1;
      for (int index = 0; index < primesCounter; index++)
      {
         if (currentHalfNumber < primesA[index])
         {
            break;
         }

         if (currentNumber % primesA[index] == 0)
         {
            isPrime = 0;
            break;
         }
      }

      if (isPrime == 1)
      {
         primesA[primesCounter] = currentNumber;
         primesCounter += 1;

         //Uncomment this line to see all the primes found
         // printf("%d \n", currentNumber);
      }

      currentNumber += 2;
      currentHalfNumber = (currentNumber + 1) / 2;
   }

   t = time(NULL);
   struct tm endTime = *localtime(&t);
   printf("End Time: %02d:%02d:%02d\n", endTime.tm_hour, endTime.tm_min, endTime.tm_sec);
   printf("Time Lapse: %02d:%02d:%02d\n", startTime.tm_hour - endTime.tm_hour, startTime.tm_min - endTime.tm_min, startTime.tm_sec - endTime.tm_sec);
   printf("Number of Primes Found: %d \n", primesCounter);

   return 0;
}
