#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, sen;
    printf("Type a number: ");
    sen = scanf("%d", &n);
    if (sen != 1){
        printf("Wrong input!\n");
        exit(1);
    }
    for(i=1; i<=n; i=i+1){
        printf("*");
    }
    printf("\n");
    for(j=1; j<=n-2;j++){
        for(i=1; i<=n; i++){
            if (i==1 || i==n){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1; i<=n; i=i+1){
        printf("*");
    }
    return 0;
}