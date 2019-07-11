#include<bits/stdc++.h>

using namespace std;

int main()
{
   // ios_base::sync_with_stdio(0),cin.tie(0);
    int n,i,j,k,var,var1,t,ck,a[10][10];
    cin >> t;
    for(k=1; k<=t; k++){
    ck = 0;
    cin >> n;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++)
            cin >> a[i][j];
    }
    var = 1;
    var1 = 6;
    if (n==5 || n==10){
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (a[i][j]==var){
                if (var==10 && j==(n-1) ){
                    ck++;
                    var=0;
                }
                var++;
            }
            else
                var = 1;
            if (a[i][j]==var1){
                if (var1==10){
                    var1=1;
                    continue;
                }
                else if (var1==5 && j==(n-1)){
                    ck++;
                    var1=5;
                }
                var1++;
            }
            else
                var1=6;
        }
    }
    cout << "Case " << k << ": " << ck << endl;
    }
    else
        cout << "Case " << k << ": " << "0" << endl;
    }
}
