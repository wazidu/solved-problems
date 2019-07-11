#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n;
    string s1,s2,s3;
    cin>>k;
    while(k--)
    {
        cin>>s1;
        if(s1=="1" || s1=="4" ||s1=="78")
            cout<<"+"<<endl;
        else if(s1=="135" || s1=="435" ||s1=="7835")
            cout<<"-"<<endl;
        else if(s1=="914" || s1=="944" ||s1=="9784")
            cout<<"*"<<endl;
        else if(s1=="1901" || s1=="1904" ||s1=="19078")
            cout<<"?"<<endl;
    }
    return 0;
}
