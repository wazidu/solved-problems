#include<bits/stdc++.h>
using namespace std;
int a[100000],i,j,k,l=0,n,p;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for ( p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for ( i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (i=0, p=2; p<=n; p++,i++)
       {if (prime[p])
         {a[l]=p; l++;

         }

}
}



int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    cin>>n;
if(n==3)
    cout<<"1 2"<<endl;
else if(n==4)
    cout<<"1 3"<<endl;
else
   {
       SieveOfEratosthenes(n);
       //k=i/2;
      for(j=l/2; ;j--)
      {
          for(k=l/2+1;k<l;k++)
          {
              if(a[j]+a[k]==n)
              {
                  cout<<a[j]<<" "<<a[k]<<endl;
                  return 0;
              }
          }

      }


   }

    return 0;


}
