#include<iostream>
#include<cstring>
using namespace std;
int i,n,m,t;
string s;
int main(){
    cin>>n;
    while(cin>>s){
        t=0;
        for(i=0;i<s.length();i++)
        if(s[i]>='A'&&s[i]<='Z')t++;
        if(t>m)m=t;
    }
    cout<<m;
}
