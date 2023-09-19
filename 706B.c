#include<stdio.h>
int main() {
    int n,x[100001]={0},tmp,q;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        x[tmp]++;
    }
    for(int i=1;i<100001;i++){
        x[i]+=x[i-1];
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&tmp);
        if(tmp>100000){
            printf("%d\n",n);
        } else {
            printf("%d\n",x[tmp]);
        }
    }
}