#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int i,j,k,m,n,c=0,d=0,sum=0,male=0,female=0;

    while(cin>>n && n>=0)
    {
        sum=0;male=0;female=0;
        for(i=0;i<=n;i++)
        {
            if(i>0)
            {
                male++;
            }
            female++;
            sum=male+female;
        }


        cout<<sum;

    }



    return 0;


}
*/

#include<stdio.h>
int main()
{
    long int n,i,female,male,total,Male,Female;
    while (1)
    {
        scanf("%ld",&n);
        if (n==-1)
            break;
        female=1;
        Female=0;
        total=1;
        male=0;
        for (i=1;i<=n;i++)
        {
            male=total;
            Male=female;
            female=female+Female;
            total=total+female;
            Female=Male;
        }
        printf("%ld %ld\n",male,total);
    }
    return 0;
}
