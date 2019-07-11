#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,j,k,m,b,c,d,e,sum=0;
char n[10000];
    while(gets(n))
    {

        sum=0;
        k=strlen(n);
        for(i=0; i<k;i++)
        {
            a=n[i]-'0';
            sum=sum+(pow(2,k-i)-1)*a;


        }
        if(sum==0) break;
        cout<<sum<<endl;
    }
    return 0;
}
