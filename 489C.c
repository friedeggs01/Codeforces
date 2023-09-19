#include<stdio.h>
int main() {
    int m,s,i,j,a[100]={1},b[100]={0};
    scanf("%d%d",&m,&s);
    if(s==0 && m!=1 || s>9*m){
        printf("-1 -1");
    } else {
        for(i=s,j=m-1;i>9;i-=9,j--){
            a[j]=9;
        }
        a[j]+=i-1;
        for(i=s,j=0; i>9; i-=9,j++){
            b[j]=9;
        }
        b[j]=i;
        for(i = 0; i < m; i++){
            printf("%d",a[i]);
        }
        printf(" ");
        for(i = 0; i < m; i++){
            printf("%d",b[i]);
        }
    }
}