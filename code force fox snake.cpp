#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{

    int j,i,n,m,k=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {

            if(i%2!=0)
            {
                for(j=1;j<=m;j++)
                {
                    printf("#");
                }
                printf("\n");
            }
            else{
                    k++;
                    for(j=1;j<=m;j++)
                    {

                        if(k%2!=0)
                         {
                        if(j==(m))
                            printf("#");
                        else
                            printf(".");
                         }else
                         {
                            if(j==(1))
                            printf("#");
                        else
                            printf(".");
                         }
                    }
                    printf("\n");

                }



    }






    return 0;
}
