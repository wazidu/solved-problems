#include<bits/stdc++.h>
using namespace std;
//long long a[1000000000],b[1000000];
int main()
{

    ios_base::sync_with_stdio(0);
    long long i,j,k,l,c,v,n,m,d,e,f,r,t;
   // while(cin>>)
	{
		cin>>c>>d>>r;
		cin>>n;
		k=0;
		for(i=0;i<n;i++)
		{
			cin>>m;
			if(m>d&&m<r)
				k++;
		}


		cout<< k <<endl;
	}
}
