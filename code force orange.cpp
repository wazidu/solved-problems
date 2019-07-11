#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i;

      double m,d=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>m;

        d=d+m;
    }

printf("%.10lf\n",d/n);
    //cout<<d/n<<endl;
    return 0;
}
