#include<stdio.h>
int main() {
    int n,m,a,b,cost,c,d;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if((double)b/m >= a){
        cost=a*n;
    } else {
        c=(n/m)*b+(n%m)*a;
        d=(n/m)*b+b;
        if(c>d){
            cost=d;
        } else {
            cost=c;
        }
    }
    printf("%d",cost);
}