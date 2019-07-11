#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f,g,h,i,j=0,a1[3];

    cin>>t;
    while(t--)
    {
        j++;
        cin>>a>>b>>c>>d>>e>>f>>g;
        a1[0]=e;a1[1]=f;a1[2]=g; sort(a1,a1+3);

        h=a+b+c+d+(a1[1]+a1[2])/2;

        if(h>=90)
            cout<<"Case "<<j<<": A"<<endl;
        else if(h>=80)
            cout<<"Case "<<j<<": B"<<endl;
        else if(h>=70)
            cout<<"Case "<<j<<": C"<<endl;
         else if(h>=60)
            cout<<"Case "<<j<<": D"<<endl;
        else
            cout<<"Case "<<j<<": F"<<endl;
    }
    return 0;
}
