#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,isLeap,b[10005]={0};
    char a[10005][50];
    scanf("%d",&n);
    getchar();
    int i = 0;
    while(n--)
    {
        gets(a[i]);
        if(i == 0)
        {
            printf("OK\n");
            i++;
        }
        else
        {
            isLeap = 0;
            for(int j=0;j<i;j++)
            {
                if(strcmp(a[i],a[j]) == 0)
                {
                    isLeap = 1;
                    b[j]++;
                    printf("%s%d\n",a[j],b[j]);
                    break;
                }
            }
            if(isLeap == 0)
            {
                printf("OK\n");
                i++;
            }
        }
    }
    return 0;
}
