#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n,i,j,t=0;
cin >> n;
int a[n];
for (i=0; i<n; i++)
cin >> a[i];
sort(a,a+n);
reverse(a,a+n);
for (i=0; i<n; i++)
{
if (a[i]==4)
t++;
else if (a[i]==3)
for (j=i; j<n; j++)
{
if (a[j+1]==1)
{
t++;
a[j+1]=0;
break;
}
if (j==n-1)
t++;
}
else if (a[i]==2)
for (j=i; j<n; j++)
{
if (a[j+1]==2)
{
t++;
a[j+1]=0;
break;
}
else if (a[j+1]==1 && a[j+2]==1)
{
t++;
a[j+1]=0;
a[j+2]=0;
break;
}
if (j==n-1)
t++;
}
else if (a[i]==1)
for (j=i; j<n; j++)
{
if (a[j+1]==1 && a[j+2]==1 && a[j+3]==1)
{
t++;
a[j+1]=0;
a[j+2]=0;
a[j+3]=0;
break;
}
if (j==n-1)
t++;
}
}
cout << t << endl;
return 0;
}
