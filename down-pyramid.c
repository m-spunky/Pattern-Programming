#include<stdio.h>

void main(){
    int i,j,k,n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for (i=n;i>=1;i--){
        for(j=0;j<=(n-i);j++){
            printf(" ");
        }
        for(k=1;k<=((2*i)-1);k++){
            printf("*");
        }
        printf("\n");
    }
}

// enter a number : 5
//  *********
//   *******
//    *****
//     ***
//      *