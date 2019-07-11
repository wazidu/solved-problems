

/*using namespace std;
int main()
{
    long long int i,j,k,l,n,m,d=0;

    char b[10000],c[10000];
    string s1,s2,s3;

    while(cin>>s1)
    {
        s2=s1;
        l=s2.size();

        sort(s2.begin(),s2.end());
        m= atoi(s2.c_str());
        s3=s2;

        reverse(s3.begin(),s3.end());
n= atoi(s3.c_str());

cout<<n<<" - "<<m<<" = "<<n-m<<" = 9 * "<<(n-m)/9<<endl;

    }
    return 0;

}


using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c=0,d=0,a[10000];
    string s1,s2,s3;
    char b[10000];








}*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std ;
int main ()
{
     ll  n  , i ,mn ,mx ,d, x ,op ,q ,v ;
    char a[1000000]  ;
    while (cin>>n)
    {
        sprintf (a,"%lld",n) ;
        ll  len=strlen(a) ;
        sort(a,a+len) ;

           mx=0 ;
        for (i=len-1 ; i>=0 ; i--)
        {
            mx=mx*10+(a[i]-'0') ;
        }

        op=0 , q ,v ;
        for (i=0 ; i<len ; i++)
        {
            if (op==1) break ;
            if (a[i]=='0' && op==0) continue ;
            else
            {
                op=1 ;
                q=i ;
                v=a[i] ;
            }
        }

        if (a[0]=='0')
        {
            a[0]=v ;
            a[q]='0' ;
        }

        mn=0 ;
        for (i=0 ; i<len ; i++)
        {
            mn=mn*10+(a[i]-'0') ;
        }

        d =mx-mn ;
        x=d/9 ;

    cout<<mx<<" - "<<mn<<" = "<<d<<" = "<<"9 * "<<x<<endl ;

    }

    return 0 ;
}
