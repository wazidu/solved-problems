#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,l,p,q,x,c=0,a1[10000];

    while(cin>>a>>p)
    {q=0;
       // if(a==0 && p==1)
            //{cout<<"0";
            //return 0;
           // }
      //  if(a==1 && p==1)
       // {cout<<endl;
        //return 0;
       // }

        j=0;
        c=0;
        for(i=0;i<p;i++)
        {
            if((i*i*i-a)%p==0)
            {
                 q=1;
                a1[j]=i;
                //cout<<a1[j]<<endl;
                j++;
                c=1;

            }

        }
      // cout<<a1[0]<<endl;
        if(a==1 && p==1)
            cout<<endl;
        else
        {
            for(i=0;i<j;i++)
            {
                cout<<a1[i];
                if(i<(j-1))
                    cout<<" ";
            }
            cout<<endl;
        }


    }


return 0;
}
