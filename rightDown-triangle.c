#include<stdio.h>

void main(){
    int i , k,j, n;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i = 1;i<=5;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for (j=0;j<=(n-i);j++){
            printf("*");
            
        }
        printf("\n");
    }
}


// enter a number : 5
// *****
//  ****
//   ***
//    **
//     *