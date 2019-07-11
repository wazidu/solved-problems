#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;

   while(cin>>n)
   {                                      // unsolvedddddddddddddddddddddddddddddddddddddd
       if(n%4==0)
       {
           if(n%100==0)
           {
               if(n%400==0)
               {
                   cout<<"This is leap year."<<endl;
                   if(n%15==0)
                    cout<<"This is huluculu festival year."<<endl;
                   if(n%55==0)
                    cout<<"This is bulukulu festival year."<<endl;

               }

           }
           else
           {


            cout<<"This is leap year."<<endl;
            if(n%15==0)
                    cout<<"This is huluculu festival year."<<endl;
            if(n%55==0)
                    cout<<"This is bulukulu festival year."<<endl;
           }

       }
         else if(n%15==0)
                    cout<<"This is huluculu festival year."<<endl;
        else if(n%55==0)
                    cout<<"This is bulukulu festival year."<<endl;
        else
                    cout<<"This is an ordinary year."<<endl;

   }

   return 0;

}
