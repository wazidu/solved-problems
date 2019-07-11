#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,k;
	int f[100];

	cin>>n>>k;

	for(int i=0; i<k-1; i++){


		for(int j=2; j<=n; j++){

			if(n%j == 0){

				n /= j;
				f[i] = j;
				break;
			}

		}

	}


	if(n == 1)
		cout<<"-1"<<endl;
	else {
		for(int i=0; i<k-1; i++)
			cout<<f[i]<<endl;
		cout<<n<<endl;
	}

	return 0;
}
