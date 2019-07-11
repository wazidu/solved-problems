#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0),cin.tie(0);
    int n,k;
//cin>>n;
scanf("%d",&n);
    while(n--)
    {
      scanf("%d",&k);

        if(k%2!=0)
           {
                printf("First\n");
                return 0;
           }
    }

       printf("Second\n");

    return 0;


}
