#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,j,k,l;
	cin>>n;
	k=n;
	for(int i=1;i<=n;i++)
	    k+=i*(n-i);
	cout<<k;
}
