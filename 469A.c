#include<stdio.h>
int main() {
    int n,t=2,a[100]={0},p,x;
    scanf("%d",&n);
    while(t--){
        scanf(" %d",&p);
        while(p--){
            scanf(" %d",&x);
            a[x-1]++;
        }
    }
    for(p=0;p<n;p++){
        if(!a[p]){
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
}