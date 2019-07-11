#include<iostream>
using namespace std;
int main()
{
    long long i,j,k,l,a,b,n,m,c;
    cin>>n;
    for( l=1; l<=n; l++)
    {
        c=0;
        cin>>a;
        m=a/2;
        //cout<<m<<endl;
        for(i=m-1; i>=1; i--)
        {
            for(j=i ; j>=1; j--)
            {

                for(k=j; k>=1; k--)
                {
cout<<(i+j+k)<<endl;
                    if((i+j+k)==a)
                        c++;
                    else if((i+j+k)<a)
                        break;
                }

            }

        }
        cout<<c<<endl;
    }
}
