// C++/C program to find maximum xor value of subarray of
// size k
#include<iostream>
using namespace std;
 long long int p,q, arr[100000000];
// Returns maximum XOR value of subarray of size k
int maximumXOR(long long int arr[] ,long long int n ,long long int k)
{
    // Compute XOR value of first subarray of size k
    long long int current_xor = 0 ;
    for (long long int i = 0 ; i < k ; i++)
        current_xor  = current_xor ^ arr[i];

    // Traverse rest of the array
  long long  int max_xor = current_xor;
    for (long long int i = k ; i < n; i++)
    {
        // First remove previous subarray's first
        // element
        current_xor = current_xor ^ arr[i-k];

        // add new element
        current_xor = current_xor ^ arr[i];

        // Update maximum xor value
        max_xor = max(max_xor, current_xor);
    }

    return max_xor;
}

// Driver program
int main()
{

   long long int k;
   cin>>p>>k;
   for(q=0;q<p;q++)
    arr[q]=q+1;
  // long long int n=p;
   long long int n = sizeof(arr)/sizeof(arr[0]);
    cout << maximumXOR(arr, n, k);
    return 0;
}
