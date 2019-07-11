#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l,c=0,d=0,m;
int a[100];
    cin>>i>>j>>k;
    a[0]=i;
    a[1]=j;
    a[2]=k;

  std::sort(a,a+3);

  cout<<(a[2]-a[1])+(a[1]-a[0])<<endl;
  return 0;


}
