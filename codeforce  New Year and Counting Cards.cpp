#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    string s1;
    cin>>s1;

    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='0' ||s1[i]=='2' ||s1[i]=='4' ||s1[i]=='6' ||s1[i]=='8' ||s1[i]=='a' ||s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u')
            k++;
    }
cout<<k<<endl;
return 0;
}

