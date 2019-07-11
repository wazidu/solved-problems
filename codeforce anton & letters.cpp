#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l,m,c=0,d=0;

    char s1[10000];
    char a[10000];

    gets(s1);
if(strlen(s1)==2)
        cout<<"0"<<endl;
else
{
    for(i=1;i<strlen(s1);i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            if(i==1)
               {
                    a[k]=s1[i];
                    k++;
               }
            else
            {
               for(j=k-1;j>=0;j--)
               {
                   if(s1[i]==a[j])
                    c++;
               }
               if(c==0){
                a[k]=s1[i];
                k++;
               }
               c=0;
            }
        }
    }
 cout<<k<<endl;


}
}
