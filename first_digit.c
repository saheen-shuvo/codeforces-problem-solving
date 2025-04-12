#include<stdio.h>
int main()
{
    int X, A;
    scanf("%d", &X);
    A = X / 1000;
    if(A % 2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}