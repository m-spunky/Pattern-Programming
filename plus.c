#include <stdio.h>

int main(){
int i,j,k,n;

n=5;
for(i=1;i<=((2*n)-1);i++){

    for(j=1;j<=((2*n)-1);j++){
        if(i==n||j==n){
             printf("*");
        }
        else{
        printf(" ");
        };
       
    };

    printf("\n");
};

return 0;
};

//     *    
//     *    
//     *    
//     *    
// *********
//     *    
//     *    
//     *    
//     *    