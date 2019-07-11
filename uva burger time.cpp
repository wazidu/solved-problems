#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int L;
    while (cin >> L, L != 0)
    {
        string S;
        cin >> S;

        int minDistance = L;
        int lastR = -L, lastD = -L;

        for (int i = 0; i < L; ++i)
        {

            if (S[i] == 'Z')
            {
                minDistance = 0;
                break;
            }

            else if (S[i] == 'R')
            {
                minDistance = min(minDistance, i - lastD);
                lastR = i;
            }

            else if (S[i] == 'D')
            {
                minDistance = min(minDistance, i - lastR);
                lastD = i;
            }
        }
        cout << minDistance << endl;
    }
    return 0;
}
