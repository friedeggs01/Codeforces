#include<stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    } else {
        return b;
    }
}
int main() {
    int n,a,b,c,ans=0;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    for(int i = 0; i*a <= n; i++){
        for(int j = 0; j*b <= n; j++){
            if(a*i+b*j<=n && (n-i*a-j*b)%c==0){
                if(ans<i+j+(n-i*a-j*b)/c){
                    ans=i+j+(n-i*a-b*j)/c;
                }
            }
        }
    }
    printf("%d",ans);
}