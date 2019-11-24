#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, j, i, sen;
    printf("Type a number: ");
    sen = scanf("%d", &n);
    if (sen != 1){
        printf("Wrong input!\n");
        exit(1);
    }
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            if (j==1 || j==i){
                printf("*");
            }else {
                printf(" ");
            } 
        }
        printf("\n");
    }
    for(i=1; i<=n; i++){
        printf("*");
    }


    return 0;
}
