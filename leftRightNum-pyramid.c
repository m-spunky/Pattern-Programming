#include <stdio.h>

int main(){
int i,j,k,l,n;

n=5;
for(i=1;i<=n;i++){
    for(j=1;j<=(n-i);j++){
        printf(" ");
    };
    for(k=1;k<=i;k++){
        printf("%d",k);  
    };
    for(l=(i-1);l>=1;l--){
        printf("%d",l);  
    };
    printf("\n");
}
return 0;
};

//     1
//    121
//   12321
//  1234321
// 123454321