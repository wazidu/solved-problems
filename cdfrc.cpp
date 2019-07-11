#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{
    int i,j,k,l,c=0,d=0;
    char c1,c2='0',b[100];
    cin>>k;

    for(i=0;i<k;i++)
    {
        cin>>c1;
        if(c1==c2){
            c++;
        }
    c2=c1;

    }
    cout<<c<<endl;

    return 0;

}
