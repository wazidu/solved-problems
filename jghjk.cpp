#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,a[100000],c,b,d,ss,n,m;
    //while(1)
    {
        string s;
        cin>>s;
        c=s[0]+s[1]+s[2]-3*48;
        d=s[3]+s[4]+s[5]-3*48;
        //cout<<c<<d<<endl;
        if(c==d)
        {
            cout<<"0"<<endl;

        }
        else
        {

            {
                ss=11111110;
                for(i=9; i>=0; i--)
                {
                    for(j=9; j>=0; j--)
                    {
                        for(k=9; k>=0; k--)
                        {
                            l=0;
                            if(i+j+k==d)
                            {
                                if(k!=s[2]-48)
                                    l++;
                                if(j!=s[1]-48)
                                    l++;
                                if(i!=s[0]-48)
                                    l++;
                                ss=min(ss,l);
                                //cout<<i<<"   "<<j<<" "<<k<<"  "<<ss<<endl;

                            }

                        }
                    }
                }
            }
            {
                //ss=11111110;
                for(i=9; i>=0; i--)
                {
                    for(j=9; j>=0; j--)
                    {
                        for(k=9; k>=0; k--)
                        {
                            l=0;
                            if(i+j+k==c)
                            {
                                if(k!=s[5]-48)
                                    l++;
                                if(j!=s[4]-48)
                                    l++;
                                if(i!=s[3]-48)
                                    l++;
                                ss=min(ss,l);
                                //cout<<i<<"   "<<j<<" "<<k<<"  "<<ss<<endl;

                            }

                        }
                    }
                }
            }
            cout<<ss<<endl;
        }
    }
}

