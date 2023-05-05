
#include<stdio.h>

void main(){
    int i , j,k,m, n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for (i = 1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        };
        printf("\n");
    };
    for (m = (n-1);m>=1;m--){
        for(k=1;k<=m;k++){
            printf("*");
        };
        printf("\n");
    }
}


// enter a number : 5

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *