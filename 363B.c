#include<stdio.h>
int main() {
    int n, k, a[150002],s,smin=100000,c=1;
    scanf("%d %d",&n,&k);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        if(i<k){
            s+=a[i];
        }
    }
    for(int i = 0; i < n-k+1; i++){
        
    }
    printf("%d",c);
}