/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;

    cin>>n;
    while(n--)
    {
        cin>>m;

        if(m==60||m==90||m==108||m==120||m==128||m==135||m==172)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{int t,x;
     cin>>t;
while(t--)
{
    cin>>x;
    puts(360%(180-x)?"NO":"YES");
}
return 0;
}
