#include<stdio.h>
int main()
{
    int N, X, Y;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        scanf("%d", &X);
        if(X == 0){
            printf("0");
        }
        while(X != 0){
            Y =  X % 10;
            printf("%d ", Y);
            X /= 10;
        }
        printf("\n");
    }
    return 0;
}