/*#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{
    int i,j,k,l,c=0,d=0;
    char c1,c2='0',b[100];
    cin>>k;

    for(i=0;i<k;i++)
    {
        cin>>c1;
        if(c1==c2){
            c++;
        }
    c2=c1;

    }
    cout<<c<<endl;

    return 0;

}*/


#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int main()
{
    char c1,c2='0';
  int i,j,l,ans=0;
  cin>>l;
  for(i=1;i<=l;i++)
  {
    cin>>c1;
    if(c1==c2){
        ans++;
    }
      c2=c1;
  }

    cout<<ans<<endl;

   return 0;
}
