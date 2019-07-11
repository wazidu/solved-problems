#include<bits/stdc++.h>
#include <map>
using namespace std;

int main()
{

	long long int i,j,k,l, n, m,c=0,d=0,a[10000],sum=0;
	cin >> n >> m;

	map<string, string> map;
	string x, y, z;

	for ( i = 0; i < m; i++) {
		cin >> x >> y;

		map[x] = y;
	}

	for ( i = 0; i < n; i++) {
		cin >> x;

		if (x.size() <= map[x].size())
			cout << x << " ";
		else
			cout << map[x] << " ";
	}


	return 0;
}
