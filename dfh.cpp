#include <bits/stdc++.h>
using namespace std;
int maxLen(string s, int n)
{
    map<int, int> hM;

    int sum = 0;
    int max_len = 0;
    int ending_index = -1;

    for (int i = 0; i < n; i++)
        s[i]-48 = (s[i]-48 == 0)? -1: 1;
    for (int i = 0; i < n; i++)
    {
        sum += s[i]-48;
        if (sum == 0)
        {
            max_len = i + 1;
            ending_index = i;
        }
        if (hM.find(sum + n) != hM.end())
        {
            if (max_len < i - hM[sum + n])
            {
                max_len = i - hM[sum + n];
                ending_index = i;
            }
        }
        else
            hM[sum + n] = i;
    }

    if(max_len==0)
        cout<<"0"<<endl;
else
    cout<<ending_index-ending_index-max_len+1<<endl;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    maxLen(s,n);
    return 0;
}

