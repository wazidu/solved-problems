#include <bits/stdc++.h>
using namespace std;
 int n,arr[10000000],arr1[10000000],p=0;
int Moves(int arr[], int n)
{
    int element = n;
    for (int i=n-1; i >= 0; i--)
    {
        if (arr[i] == element)
            element--;
    }

    return element;
}


int main()
{


    cin>>n;
    for(int j=0;j<n;j++)
        {cin>>arr[j];

        arr1[p]=arr[j];
        p++;
        }
    int q=    Moves(arr,n);
sort(arr1,arr1+n);
if(q==0)
    cout<<"0"<<endl;
else if(arr[0]<=arr[n-1])
    cout<<q<<endl;
else
   cout <<"-1"<<endl;

    return 0;
}
