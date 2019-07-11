#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int i,t,j,k=0,l1,l2,m,n,c=0,d=0;

    char a[10000],b[10000];
   // string a,b,s1,s2,s3;

    cin>>t;

    while(t--)
    {
        k++;
        j=0;d=0;int space=0;
        gets(a);
        //cout<<endl;
        gets(b);
       //gets(b);
      // cin>>a;
       //cin>>b;
      // scanf("%s\n",a);
      // scanf("%s",b);
       cout<<"Case "<<k;
        l1=strlen(a);
        l2=strlen(b);

        for(i=0;i<l1;)
        {
            if(a[j]!=' ')
            {
                if(b[i]!=a[j])
                    d++;

                i++;j++;
            }
            else
                space++;

        }
        if(d==0 && space==0)
            cout<<": Yes"<<endl;
        else if(d==0 && space>0)
            cout<<": Output Format Error"<<endl;
        else
             cout<<": Wrong Answer"<<endl;


    }
}

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char judge[30],team[30],team1[30];
    int kase,len1,len2,match,j,k,er;
    while(scanf("%d\n",&kase)==1)
    {
        for(int i=1; i<=kase; i++)
        {
            gets(team);
            gets(judge);
            printf("Case %d: ",i);
            len1=strlen(team);
            len2=strlen(judge);
            if((strcmp(judge,team))==0)printf("Yes\n");
            else
            {
                k=0;
                er=0;
                for(j=0; j<len1; j++)
                {
                    if((team[j]>='a'&&team[j]<='z')||(team[j]>='A'&&team[j]<='Z'))
                    {
                        team1[k]=team[j];
                        k++;
                    }
                }
                team1[k]='\0';
                for(j=0; j<len2; j++)
                {
                    if(judge[j]!=team1[j])
                    {
                        er++;
                        break;
                    }
                }
                if(len2==k && er ==0)printf("Output Format Error\n");
                else printf("Wrong Answer\n");
            }
        }
    }
    return 0;
}
