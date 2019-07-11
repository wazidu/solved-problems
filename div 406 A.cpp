#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll aa[100000];
int main()
{
    cin.sync_with_stdio(false);
    ll i,j,k,l,c,a,d,v,b,n,m;
    string s,s1,s2;

    while(cin>>a)
    {
        cin>>b>>c>>d;
        i=a+b;
        j=b+2*a;
        k=c+d;
        l=2*c+d;
        n=b;
        m=d;

        if((i%2==0&&j%2==0&&k%2==1&&l%2==1)||(i%2==1&&j%2==1&&k%2==0&&l%2==0))
            cout<<"-1"<<endl;
        else
        {
            i=1;
            j=1;
            while(1)
            {
                if(n==m)
                {
                    cout<<n<<endl;
                    break;
                }
                else if(n<m)
                {
                    while(m>n)
                    {
                        n=b+i*a;
                        i++;
                    }
                    //cout<<"p"<<n<<endl;
                }
                else
                {
                    while(n>m)
                    {
                        m=d+j*c;
                        j++;
                        // cout<<j<<" "<<m<<endl;
                    }
                    // cout<<"pp"<<m<<endl;
                }
                if(n>100000000||m>100000000)
                {
                    cout<<"-1"<<endl;
                    break;
                }
            }
        }

    }

}

