#include<bits/stdc++.h>
using namespace std;
#define ll int
ll aa[250009];
ll binarysearch(ll a[],ll n,ll y)
{
   ll  start=0;
   ll  end=n-1;
    while(start<=end)
    {
       ll  mid=(start+end)/2;
        if(a[mid]==y)
        {
            return mid;
        }
        else if(y<a[mid])
            end=mid-1;
        else if(y>a[mid])
            start=mid+1;
    }
}


int main()
{
    ll i,j,k,l,b,n,m,d,f,p,pp,t,q=1,c[500000];
    string s,s1,s2,s3,x1,x;
    cin>>m;
    k=1;
    while(m--)
    {
        cin>>n>>b;
        aa[0]=0;
        aa[1]=n;
        c[0]=n;
        j=2;
        l=0;
        cout<<"Case "<<q++<<":"<<endl;
        for(i=0; i<b; i++)
        {
            cin>>x>>p;
            if(x[0]=='C')
            {
                aa[j]=p;
                j++;
               sort(aa,aa+j);
               pp=binarysearch(aa,j,p);
               c[l++]=aa[pp]-aa[pp-1];
               c[l++]=aa[pp+1]-aa[pp];
               sort(c,c+l);

            }
            else
            {
                cout<<c[p-1]<<endl;
            }
        }
    }
}



