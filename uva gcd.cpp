#include<bits/stdc++.h>
using namespace std;

long long int i,j,k,l,m,c=0,d=0,n,N, G=0;



int gcd(int i,int j)
{
    while(i!=j)
    {
        if(i>j)
            i=i-j;
        else
            j=j-i;
    }
    return i;

}


int main()
{
    while(cin>>N && N!=0)
    {
        G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=gcd(i,j);
            }
        cout<<G<<endl;
    }


}





