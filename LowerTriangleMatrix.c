#include <stdio.h>
#include <stdlib.h>
#define N 3
//application in matrix problem(lower triangle matrix determination)
int is_upper(int mat[][N]);
int main()
{
    int a[][N]={1,4,8,0,9,0,0,0,45};
    is_upper(a);
    return 0;
}

int is_upper(int mat[][N]){
    int i,j,k=0,h=1,l=0;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<=N-h;j++){
            
            if(mat[j][i]!=0){         //determine if the matric down part has the 0
                l=l+1;
            }
            else{
                k=k+1;
            }
        }
    }
    if(l!=0){                       // if we have 1 value at down part is not 0, it present false
        printf("0");
    }
    else{
        printf("1");
    }


}