#include<stdio.h>
int main() {
    int n,a,ans=0,c=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a>0 && c<0){
            c=0;
        }
        c+=a;
        if(c<0 && a<0){
            ans++;
        }
    }
    printf("%d",ans);
}