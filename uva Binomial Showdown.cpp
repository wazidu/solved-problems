//unsolved...........................

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,r,i,j,k,l,m,c=0,npr,fr;

    while(cin>>n>>r &&n>0 && r>0)
    {
        npr=1;fr=1;
        for(i=n;i>(n-r);i--)
        {
            npr=npr*i;
        }
        for(j=1;j<=r;j++)
            fr=fr*j;

        cout<<npr/fr<<endl;

    }




}
