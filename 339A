#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    gets(s);
    int t, l=strlen(s);
    for(int i = 0; i < l;i+=2){
        for(int j = i+2;j<l;j+=2){
            if(s[i]>s[j]){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    puts(s);
}