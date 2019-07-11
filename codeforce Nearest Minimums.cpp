#include<bits/stdc++.h>
using namespace std;
long long int a[1000000],b[1000000];
int main()
{
    long long int n,i,j,k,min1=-1,min2;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    min2=min1=a[1];
    for(i=1;i<n;i++)
    {
        if(a[i]>min1)
        {
            min2=a[i];
            break;
        }

    }
    cout<<min2-min1+1<<endl;

    main();
}
