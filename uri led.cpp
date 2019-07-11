#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l,one=2,led=0,two=5,three=5,four=4,five=5,six=6,seven=3,eight=7,nine=6,zero=6;
    string s1;

    cin>>t;

    while(t--)
    {
        led=0;
        cin>>s1;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='0')
                led=led+zero;
            else if(s1[i]=='1')
                led=led+one;
             else if(s1[i]=='2')
                led=led+two;
             else if(s1[i]=='3')
                led=led+three;
             else if(s1[i]=='4')
                led=led+four;
             else if(s1[i]=='5')
                led=led+five;
             else if(s1[i]=='6')
                led=led+six;
             else if(s1[i]=='7')
                led=led+seven;
             else if(s1[i]=='8')
                led=led+eight;
             else if(s1[i]=='9')
                led=led+nine;

        }
        cout<<led<<" leds"<<endl;
    }
    return 0;
}
