#include<stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < m; j++){
                if(j==m-1){
                    printf("#\n");
                } else {
                printf("#");
                }
            }
        } else if(i%4==1) {
            for(int j = 0; j < m; j++){
                if(j==m-1){
                    printf("#\n");
                } else {
                    printf(".");
                }
            }
        } else {
            printf("#");
            for(int j = 1; j < m; j++){
                if(j==m-1){
                    printf(".\n");
                } else {
                    printf(".");
                }
            }
        }
    }
}