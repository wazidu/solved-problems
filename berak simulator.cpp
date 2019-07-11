#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    float i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>j>>k;
        printf("-%.2f\n",(j/k));
    }
    return 0;
}
