#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
main()
{
     int pk,qd,am,no,c=0,a,b,no2;

    while(scanf("%d%d",&no,&no2)==2){
            c=0;
    for(pk=2; pk<=1000; pk++)
    {
        am=0;
        for(qd=2; qd<=pk/2; qd++)
        {
            if(pk%qd==0)
            {
                am=1;
                break;
            }
        }
        if(am==0)
            c++;
        if(c==no)
        {
            //printf("%d",pk);
            a=pk;
            //break;
        }
        if(c==no2)
        {
            b=pk;
            //break;
        }
    }


    if((a+b)%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    }
    getch();
    return 0;
}
