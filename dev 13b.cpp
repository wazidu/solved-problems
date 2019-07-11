#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(void)
{
        unsigned long num;      // prime number to find
        unsigned long prime;    // number to be checked
        unsigned long div;      // potential divisors
        unsigned long count;    // what prime number
        bool isPrime;           // prime flag

        printf("For what prime number would you like to find the value?\n");
        scanf("%lu", &num);

while (prime == 1)
{
        for(prime = 0; count <= num; prime++)
        for(div = 2, isPrime= true; (div * div) <= prime; div++)
        {
                if (prime % div == 0)
                {
                        isPrime= false; // number is not prime
                }
                if (isPrime)
                {
                        do
                        {
                                count = 0, count++;
                        }
                        while (count <= num);
                        printf("That prime number is:\n%lu\n", prime);
                }
        }
}
        return 0;
}
