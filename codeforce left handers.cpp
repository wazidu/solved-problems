#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,l,r,a,l1,r1;

    while(cin>>l>>r>>a)
    {
       while(a>0)
       {
           if(l<=r)
            l++;
           else if(r<l)
            r++;

           a--;
       }
       if(l<r)
        cout<<l*2<<endl;
       else
        cout<<r*2<<endl;
    }

    return 0;
}
