
#include <stdio.h>
#include <stdlib.h>
//application for check the string values if they are suffix, if not 0 will appare otherwise 1 will appare.
int is_suffix(const char s[],const char p[]);
int main()
{
    char s[]= "balla";
    char p[]= "baseball";
    //printf("%c ",s[]);
    is_suffix(s,p);
    return 0;
}
int is_suffix(const char s[],const char p[]){
    int i,j=7,k=0;
    for(i=4;i>=0;i--){
        if(s[i]==p[j]){
            k=k+1;             //determine the reverse value is equal if equal is true if not is false.
        }
        else{
            k=k*0;
        }
        j--;
    }
    if(k!=0){
        printf("1");
    }                           //set the condition to present the true or false.
    else{
        printf("0");
    }
}
