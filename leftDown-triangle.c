#include<stdio.h>

void main(){
    int i , j, n;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i = 1;i<=5;i++){
        for (j=0;j<=(n-i);j++){
            printf("*");
            
        }
        printf("\n");
    }
}


// enter a number : 5
// *****
// ****
// ***
// **
// *