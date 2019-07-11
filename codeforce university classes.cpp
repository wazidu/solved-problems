#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;

    while(cin>>n)
    {
        string s[n+5];

        for(int i=0; i<n; i++) cin>>s[i];

        int mx=-1;

        for(int i=0; i<7; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(s[j][i]=='1') cnt++;
            }

            mx=max(cnt, mx);
        }

        cout<<mx<<endl;
    }
   // main();
   return 0;

}
