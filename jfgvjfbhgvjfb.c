#include  <stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    c=a+b+c;

    if(a<(b+c)|| b<(a+c)|| c<(a+b))
    {
        printf("Perimetro = %.1f",c);
    }
    else
    {
        printf("Area = %.1f",.5*(a+b)*c);
    }
    return 0;
}
