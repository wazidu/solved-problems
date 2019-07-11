#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,x,val[100010]={0},maxn=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        val[x] += x;
    }
    for(int i=100000;i>=0;i--)
        val[i] = max(val[i]+val[i+2],val[i+1]);
    cout << val[0];
    return 0;
}
