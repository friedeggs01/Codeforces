#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%i",&n);
    long long int a,b,j;
    while(n--)
    {
        scanf("%lld",&a);
        b=sqrt(a);
        for(j=2;j*j<=b;j++)
          if(b%j==0) break;
            puts((j*j>b&&b*b==a&&a>1)?"YES":"NO"); 
    }
}