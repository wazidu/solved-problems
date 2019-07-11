#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    int t,no=0;
    char s[1000],c;
    sc(“%d”,&t);

    while(t–)
    {
        gets(s);
        int l=strlen(s);
        pf(“Case %d: “,++no);
        for(int i=0; i<l; i++)
        {
            int p=0;
            if(s[i]>=’A’&&s[i]<=’Z’)
                c=s[i];
            else if(s[i]>=’0’&&s[i]<=’9′)
            {
                p+=s[i]-‘0’;
                i++;
                while(s[i]>=’0’&&s[i]<=’9′)
                {
                    p=p*10+s[i]-‘0’;
                    i++;
                }
                i–;
                for(int j=0; j<p; j++)
                    pf(“%c”,c);
            }

        }
        pf(“n”);
    }

    return 0;
}
