#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,c=0,d=0,e=0,f=0,g=0,h=0,l1=0,l2=0,o=0;
    char b[100], x[100];
    //char y[]="hello";

    gets(b);
    l=strlen(b);
    for(i=0;i<l;i++)
    {
        if(b[i]=='h')
        {
            h++;

            if(h>=1)
            {
                if(b[i+1]=='e')
                {
                    e++;
                    if(e>=1)
                    {
                        if(b[i]=='l')
                        {
                            l1++;
                            if(l1>=1)
                            {
                                if(b[i]=='l')
                                {
                                    l2++;
                                    if(l2>=1)
                                    {
                                        if(b[i]=='o')
                                        {
                                            o++;
                                            if(o>=1)
                                            {
                                                cout<<"YES"<<endl;
                                            }
                                            else
                                            {
                                                cout<<"NO"<<endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
