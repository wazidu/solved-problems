#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
char A[10]="hello",a;
int i;
int main()
{
    while(scanf("%c",&a) && a!='\n')
        if(a == A[i])i++;
    printf(i==5 ? "YES" : "NO");

    return 0;
    }
