#include<bits/stdc++.h>
using namespace std;

bool cmp (string x, string y)
{
    string t1 = x + y;
    string t2 = y + x;

    if ( t1 > t2 )
        return true;
    return false;
}
int main ()
{
    int n;
    string a [55];

    while ( scanf ("%d", &n) && n ) {

        for ( int i = 0; i < n; i++ )
            cin >> a [i];

        sort (a, a + n, cmp);

        for ( int i = 0; i < n; i++ )
            cout << a [i];

        printf ("\n");
    }

    return 0;
}

