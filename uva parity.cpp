#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    long long int num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0,p;

   while(cin>>num && num>0)
   {
       p=num;binary=0;base=1;
        no_of_1s = 0;
    decimal_num = num;
    while (num > 0)
    {
        remainder = num % 2;

        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }

    printf("The parity of %lld is %lld (mod 2).\n",binary, no_of_1s);

   }

   return 0;
}
