#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
if(a==c){
    printf("%d\n",(b*c)*b-(a+c)*b);
    }
    else
        printf("%d",a*c-b*c);


    return 0;
}
