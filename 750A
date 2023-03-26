#include<stdio.h>
int main() {
    int n,k,s=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        s+=5*i;
        if(s+k>240){
            printf("%d",i-1);
            break;
        } 
        if(i==n &&s+k<=240){
            printf("%d",n);
        }
    }
}