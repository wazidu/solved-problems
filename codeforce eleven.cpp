#include <bits/stdc++.h>
using namespace std;
long long int f[19]= {0,1,1},i,num;
void fact()
{
    for(i=3; i<=18; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
}
int main()
{
    cin>>num;
    fact();
    for(i=1; i<=num; i++)
{
    if(binary_search(f,f+19,i))
            cout<<"O";
        else cout<<"o";
    }
    //main();
}
