#include <stdio.h>
#include <stdlib.h>
//Application to find the specific data(number in this case) and then exclude it.
void move_zero(int x[],int n);
int main(void)
{
    int a[8]={0,-1,2,0,7,6,-8,0};

    move_zero(a,8);
}
void move_zero(int x[],int n){
    int i,j,k=0,m=0;
    int b[n];
    int c[n];

    for (i=0;i<n;i++){
        if(x[i]!=0){
            b[k]=x[i];
            printf("%d ",b[k]); //take out all non-zero value
            k++;
        }
    }

    for (i=0;i<n;i++){
        if(x[i]==0){
        c[m]=x[i];
        printf(" %d ",c[m]); //put all zero at bake
        m++;
    }

        }


}
