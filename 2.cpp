#include<bits/stdc++.h>

using namespace std;

int main()

{


    int i,j=0;

    for(i=2;i<=2045 ;i++)
    {
        if(i%5==0&&i%3==0)
            j++;
    }

    cout<<j<<endl;
}

