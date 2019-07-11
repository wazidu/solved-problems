#include<bits/stdc++.h>
using namespace std;
/*int main()
{

    long long int i,j,k,l,c=100000,d=0,a[10000],b[10000],n,r,p;

    while(cin>>n>>d>>r && n!=0 && d!=0 && r!=0)
    {
        c=100000;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            {
                cin>>b[i];
            if((a[i]+b[i])>d)
            {
                p=a[i]+b[i]-d;

                c=min(p,c);
                c=p;

            }

            }
            if(c==100000)
                cout<<"0"<<endl;
            else
                cout<<c*r<<endl;

    }




}*/

#include<stdio.h>
void selection(int x[],int n);
int main()
{ int n,d,r,i,morning[100],evening[100],dtime,totaltime;
  while(scanf("%d%d%d",&n,&d,&r)==3)
  {
      if(n==0 && d==0 && r==0)
      break;
      totaltime=0;
      for(i=0;i<n;i++)
      scanf("%d",&morning[i]);
      for(i=0;i<n;i++)
      scanf("%d",&evening[i]);
      selection(morning,n);
      selection(evening,n);
      /*for(i=0;i<n;i++)
      printf("%d ",morning[i]);
      for(i=0;i<n;i++)
        printf("%d ",evening[i]); */
        for(i=0;i<n;i++)
        {
          dtime=morning[i]+evening[n-1-i];
          if(dtime>d)
          totaltime=totaltime+(dtime-d);
          }
         printf("%d\n",totaltime*r);

    }
    return 0;
    }



  void selection(int x[],int n)
  {
      int i,j,minvalue,temp;
      for(i=0;i<n-1;i++)
      {
         minvalue=i;
         for(j=i+1;j<n;j++)
         {
            if(x[minvalue]>x[j])
            {
              minvalue=j;
              }
          }
          if(minvalue!=i)
          {
            temp=x[i];
            x[i]=x[minvalue];
            x[minvalue]=temp;
            }
         }

      }

