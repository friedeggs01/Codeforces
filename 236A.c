#include<stdio.h>
#include<string.h>
int main () {
    char s[100]={0};
    int n=0,a[96]={0};
    gets(s);
    for(int i=0;i<100;i++){
        a[s[i]-32]=1;
    }
    for(int i=0;i<96;i++){
        n+=a[i];
    }
    if(n%2==0){
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}