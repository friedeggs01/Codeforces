#include<stdio.h>
#include<string.h>
int main() {
    int n,i,j,b[1000000]={0},l=0;
    char s[50],a[1000000][50];
    scanf("%d",&n);
    i=n;
    while(i--){
        scanf("%s",s);
        for(j = 0; j < l; j++){
            if(strcmp(s,a[j])==0){
                b[j]++;
                break;
            }
        }
        if(j==l){
            printf("OK\n");
            strcpy(a[l],s);
            l++;
        } else {
            printf("%s%d\n",s,b[j]);
        }
    }
}