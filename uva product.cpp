/*#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;
int main()
{

    long long int x,y,i,j,k,l,m,n,c=0,d=0;

    string a,b;


    while(cin>>a>>b)
    {

        vector<int> result(a.size()+b.size(),0);


        for(i=a.size()-1;i>=0;i--)
        {
            for(j=b.size()-1;j>=0;j--)
            {
                result[i+j+1]=(a[i]-'0')*(b[j]-'0');
            }
        }

        for(i=a.size()+b.size();i>=0;i--)
        {
            if(result[i]>=10)
            {
                result[i-1]+=result[i]/10;
                result[i]%=10;
            }
        }

        for(i=0;i<a.size()+b.size();i++)
        {
           // if(result[0]==0)
                //continue;
            //else
                cout<<result[i];
        }

        cout<<endl;

    }

return 0;


}*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
       char ar[300],br[300];
       long long i,cr[300],l1,l2,dr[300],l,j;
       while(cin>>ar>>br)
       {
              long long er[600]={0};
              l1=strlen(ar);
              l2=strlen(br);
              for(i=l1-1;i>=0;i--)
              cr[l1-1-i]=ar[i]-'0';
              for(i=l2-1;i>=0;i--)
              dr[l2-1-i]=br[i]-'0';
              for(i=0;i<l1;i++)
              {
                     for(j=0;j<l2;j++)
                     {
                          er[i+j]+=cr[i]*dr[j];
                          er[i+j+1]+=er[i+j]/10;
                          er[i+j]%=10;
                         // cout<<er[i+j]<<" "<<er[i+j+1]<<endl;
                     }
              }
              l=l1+l2;
              while(er[l]==0&&l>0)
                     l--;
              for(i=l;i>=0;i--)
                     cout<<er[i];
              cout<<endl;


       }
       return 0;
}
