#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
     return a>b? a: b;
}

int findSubArray(string s , int n)
{
    int maxsize = -1, startindex;
    int sumleft[n];
    int min, max;
    int i;
    sumleft[0] = ((s[0]-48 == 0)? -1: 1);
    min = s[0]-48; max = s[0]-48;
    for (i=1; i<n; i++)
    {
        sumleft[i] = sumleft[i-1] + ((s[i]-48 == 0)?
                     -1: 1);
        if (sumleft[i] < min)
            min = sumleft[i];
        if (sumleft[i] > max)
            max = sumleft[i];
    }
    int hash[max-min+1];
    for (i=0; i<max-min+1; i++)
        hash[i] = -1;

    for (i=0; i<n; i++)
    {
        if (sumleft[i] == 0)
        {
           maxsize = i+1;
           startindex = 0;
        }
        if (hash[sumleft[i]-min] == -1)
            hash[sumleft[i]-min] = i;
        else
        {
            if ((i - hash[sumleft[i]-min]) > maxsize)
            {
                maxsize = i - hash[sumleft[i]-min];
                startindex = hash[sumleft[i]-min] + 1;
            }
        }
    }
    if (maxsize == -1)
        cout<<"0"<<endl;
    else
        cout<<startindex+maxsize-startindex<<endl;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    findSubArray(s,n);
    return 0;
}
