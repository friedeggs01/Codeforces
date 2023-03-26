#include<stdio.h>
int main() {
    int n,a[1000],c=1,max,min;
    scanf("%d",&n);
    if(n==1){
        printf("0");
        return 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1]){
        max=a[0];
        min=a[1];
    } else if(a[0]==a[1]) {
        max=a[1];
        min=a[0];
        c=0;
    } else{
        max=a[1];
        min=a[0];
    }
    for(int i = 2; i < n; i++){
        if(a[i]>max){
            c++;
            max=a[i];
        } else if(a[i]<min){
            c++;
            min=a[i];
        }
    }
    printf("%d",c);
}