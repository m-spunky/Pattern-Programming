#include<stdio.h>

void main(){
    int i,j,k,n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("\n");
    for (i=1;i<=n;i++){
        for(j=1;j<=(2*(n-i));j++){
            printf(" ");
        }
        for(k=1;k<=((2*i)-1);k++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=(n-1);i>=1;i--){
    for(j=1;j<=(2*(n-i));j++){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("* ");
    }
    printf("\n");
}

}


// enter a number : 5

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 