/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k=0,a[10000],b[1000],c[1000],d=0,e=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]>d)
        {
            d=a[i];
            j=i;
        }

 }
  e=a[0];
 for(i=1;i<n;i++)
 {

        if(a[i]<=e)
        {
            e=a[i];
            k=i;
        }
 }
    cout<<j+n-1-k<<endl;

    //cout<<e;
    return 0;
}*/


#include<iostream>
using namespace std;
int n,i,p,q=99,x,a,b;
main()
{
    for(cin>>n; i++<n;)

        cin>>x,x>p?p=x,b=i:0,x<=q?q=x,a=i:0;

    cout<<b+n-a-1-(b>a);


}
