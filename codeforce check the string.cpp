#include<bits/stdc++.h>
using namespace std;
int i = 1, a1, b1, c1, s;
string a;

int main()
{
    cin >> a;
    while ( 1 == 1 ) {
        if ( a[0] == 'a' ) {
            a1++;
            while ( a[i] == a[0] ) {
                a1++;
                i++;
            }
            if ( a[i] != a[0] && a[i] == 'b') {
                b1++;
                s = i;
                i++;
                while ( a[s] == a[i] ) {
                    b1++;
                    i++;
                }
                if ( a[s] != a[i] && a[i] == 'c' ) {
                    s = i;
                    c1++;
                    i++;
                    if ( i >= a.length() ) {
                        if ( c1 == a1 || c1 == b1 ) {
                            cout << "YES";
                        }
                        else cout << "NO";
                        return 0;
                    }
                    while ( a[s] == a[i] ) {
                        c1++;
                        i++;
                        if ( i >= a.length() ) {
                            if ( c1 == a1 || c1 == b1 ) {
                                cout << "YES";
                            }
                            else cout << "NO";
                            return 0;
                        }
                    }
                    cout << "NO";
                    return 0;
                }
                else {
                    cout << "NO";
                    return 0;
                }
            }
            else {
                cout << "NO";
                return 0;
            }
        }
        else {
            cout << "NO";

            return 0;
        }
    }
    //main();
}
