#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int n,m,i,j,k,c=0,d=0,sum=0,a[10000],b[10000];

    while(cin>>n>>m && n!=0 && m!=0)
    {
        sum=0;
        for(i=0;i<n;i++)
            {cin>>a[i];
            }
        for(i=0;i<m;i++)
            {cin>>b[i];
            }
        sort(b,b+m);
sort(a,a+n);

            for(i=0,j=0;i<m;i++)
            {
                if(b[i]>=a[j])
                {
                    sum=sum+b[i];

                    j++;
                    if(j==n)
                        break;

                }
            }
if(j==n)
            cout<<sum<<endl;
else
    cout<<"Loowater is doomed!"<<endl;
        }
    return 0;

}*/


#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int M,N,i,j;           // M: number of heads, N: number of knights
    int m[20010],n[20010]; // m[i]: diameter of head, n[i]: height of knight
    while (scanf("%d %d",&M,&N)){
        if (!M && !N) break;
        for(i=0;i<M;i++) scanf("%d",&m[i]);
        for(i=0;i<N;i++) scanf("%d",&n[i]);

        sort(m,m+M);
        sort(n,n+N);

        long long int paid=0;

        for(i=0,j=0;i<N;i++){
            if(n[i] >= m[j]){
                paid += n[i];
                if(++j == M) break;
            }
        }

        if(j == M) printf("%lld\n",paid);
        else printf("Loowater is doomed!\n");
    }

    return 0;
}
