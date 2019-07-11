#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j=0,k=0;

    string s,s1;
    char s2[100000];
    cin>>s;

    for(int i=0;i<s.length();i++)
		{


			if(k==0 && s[i]=='0')
			{
				k=1;

			}
			else
			{
			    s2[j]=s[i];
			    j++;
			}


		}

		if(k==0)
            j--;

    for(i=0;i<j;i++)
        cout<<s2[i];
    cout<<endl;



}
