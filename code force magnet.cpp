#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,t=0,c=0;
	cin>>n;
	while(n--){
		cin>>x;
		if(x!=t)	c++;
		t=x;
	}
	cout<<c;
}
