#include<stdio.h>

int main(){
    
    int n;
    printf("Enter No. of Rows ");
    scanf("%d",&n);
    int arr[n][n];

    int mC,mR,MC,MR;
    mC =0;
    mR =0;
    MR =n-1;
    MC =n-1;

    int i,j,k,l,m,pass;
    i = 1;
    pass = 1;
    
    while(i<=(n*n)){
        for(j=mC;j<(n-pass);j++){
            arr[mR][j] = i++;
        };
        for(k=mR;k<=(n-pass);k++){
            arr[k][MC] = i++;
        };
        for(l=(MC-1);l>=(pass-1);l--){
            arr[MR][l] = i++;
        };
        for(m=(MR-1);m>(pass-1);m--){
            arr[m][mC] = i++;
        };
        mC++;
        MC--;
        mR++;
        MR--;
        pass++;
    };
    
    int starter = 64;
    for(int p = 0;p<n;p++){
        for(int q = 0;q<n;q++){
            printf("%c ", (starter + arr[p][q]));
        };
        printf("\n");
    };
    
  return 0;  
};


// Enter No. of Rows 5
// A B C D E 
// P Q R S F 
// O X Y T G 
// N W V U H 
// M L K J I 
