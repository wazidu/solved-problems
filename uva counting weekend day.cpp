#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int t,i,j,k,l,c=0,d1,d2;
    string m,d,s1;

    cin>>t;

    while(t--)
    {
        d1=0;d2=0;
        cin>>m>>d;

        if(m=="JAN" || m=="MAR" ||m=="MAY" ||m=="JUL" ||m=="AUG" ||m=="OCT" ||m=="DEC" )
        {
            if(d=="FRI")
            {   k=1;l=2;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="SAT")
            {
                k=1;l=7;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="SUN")
            {
                k=6;l=7;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="MON")
            {
                k=5;l=6;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="TUE")
            {
                k=4;l=5;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="WED")
            {
                k=3;l=4;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="THU")
            {
                k=2;l=3;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=31){
                    k=k+7;
                    d1++;
                    }
                    if(l<=31)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }

        }
        else if(m=="APR" || m=="JUN" ||m=="SEP" ||m=="NOV" )
        {
            if(d=="FRI")
            {   k=1;l=2;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="SAT")
            {
                k=1;l=7;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="SUN")
            {
                k=6;l=7;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="MON")
            {
                k=5;l=6;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="TUE")
            {
                k=4;l=5;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="WED")
            {
                k=3;l=4;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="THU")
            {
                k=2;l=3;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=30){
                    k=k+7;
                    d1++;
                    }
                    if(l<=30)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }

        }
        else if(m=="FEB" )
        {
            if(d=="FRI")
            {   k=1;l=2;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="SAT")
            {
                k=1;l=7;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="SUN")
            {
                k=6;l=7;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="MON")
            {
                k=5;l=6;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="TUE")
            {
                k=4;l=5;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="WED")
            {
                k=3;l=4;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }
            else if(d=="THU")
            {
                k=2;l=3;
                for(i=1;i<=5 ;i++)
                {
                    if(k<=28){
                    k=k+7;
                    d1++;
                    }
                    if(l<=28)
                    {
                        l=l+7;
                        d2++;
                    }
                }
            }

        }
        cout<<d1+d2<<endl;
    }

return 0;
}
