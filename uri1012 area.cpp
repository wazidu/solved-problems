#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c;

    printf("TRIANGULO: %.3lf\n",.5*a*c);
    printf("CIRCULO: %.3lf\n",3.14159*c*c);
    printf("TRAPEZIO: %.3lf\n",.5*(a+b)*c);
    printf("QUADRADO: %.3lf\n",b*b);
    printf("RETANGULO: %.3lf\n",a*b);

    return 0;
}
