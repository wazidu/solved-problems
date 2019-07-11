#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int t,i,j,k,l,c=0,d=0,sum=0;;

    while(cin>>k  )
    {
        if(k==0) break;
        if(d!=1)
            cout<<"PERFECTION OUTPUT"<<endl;

            d=1;
        sum=0;
        for(i=0;i<=k/2;i++)
        {
            if(k%i==0)
                sum=sum+i;
        }

        if(sum==k)
            printf("%5d  PERFECT\n",k);
        else if(sum<k)
            printf("%5d  DEFICIENT\n",k);
        else if(sum>k)
            printf("%5d   ABUNDANT\n",k);



    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i,j,k,m,n,x=0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(x!=1)
        printf("PERFECTION OUTPUT\n");
        x=1;

        m=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                m+=i;
        }
        if(m==n)
            printf("%5d  PERFECT\n",n);
        else if(m>n)
            printf("%5d  ABUNDANT\n",n);
        else if(m<n)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
