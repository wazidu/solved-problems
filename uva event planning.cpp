#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
     int i,n,b,h,w,p,a,d[18],sum=0,j,k,l=0,m;

    while(cin>>n>>b>>h>>w)
    {

    l=0;
    while(h--)
    {

        cin>>p;
m=0;

        for( i=0;i<w;i++)
        {
            cin>>j;

            if(n<=j )
            {

              d[l] =n*p;
              l++;
              m=1;
            }
        }
    }
    sort(d,d+(l-1));

    if(l==0 || d[0]>b)
        cout<<"stay home"<<endl;
    else if(d[0] != 2000000000 && d[0] <= b)
        cout<<d[0]<<endl;



    }

return 0;
}*/

#include<stdio.h>
int main()
{
    long frnd,bud,hotel,week,amount,cost=15000000,b,p,visit,i,j,room;
    while(scanf("%ld%ld%ld%ld",&frnd,&bud,&hotel,&week)==4)
    {
        for(i=0;i<hotel;i++)
        {
            scanf("%ld",&amount);
            for(j=0;j<week;j++)
            {
                scanf("%ld",&room);
                p=0;
                if(room>=frnd)
                {
                    p=amount*frnd;
                    if(cost>p)
                    cost=p;
                }
            }
        }
            if(cost>bud)
            printf("stay home\n");
            else
            printf("%ld\n",cost);
            cost=15000000;


        }

    return 0;
}


