#include <iostream>
using namespace std;
int main(){
	int n,m,a[100000],b[100000],d=0;
	cin>>n>>m;
	for(int i=0;i<m;i++)
		cin>>a[i]>>b[i];
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		if(a[j]<n&&a[j]!=-1){
			n+=b[j];
			a[j]=-1;
			d++;
			}
	if(d<m){
		cout<<"NO";
		return 0;}
	cout<<"YES";
}
