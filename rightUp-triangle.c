#include<stdio.h>

void main(){
    int i , j,k, n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for (i = 1;i<=n;i++){
        for (k=1;k<=(n-i);k++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}


// enter a number : 5
//     *
//    **
//   ***
//  ****
// *****