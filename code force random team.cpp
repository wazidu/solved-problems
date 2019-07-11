#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m,n,a,b;
	cin>>n>>m;
	a=n/m;
	b=n%m;
	cout<<b*(a*a+a)/2+(m-b)*(a*a-a)/2<<" "<<((n-m+1)*(n-m))/2;

	return 0;
}
