#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long i,j,k,n,m,a[10000],b[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>a[j];

		}
		sort(a,a+j);
		l=0;
		for(k=j-1;k>=0;k--)
        {
                if(a[k]>a[k-1])
                    c=a[k-1];
                else
                    b[l]=a[k];
                    l++;
        }

        b[l]=c;
        if(l==0)

        for(j=0;j<=l;j++)
            a[j]=b[l];


	}

	}

