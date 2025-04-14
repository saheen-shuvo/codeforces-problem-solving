#include<stdio.h>
int main()
{
    int N, X, Max=0;
    scanf("%d", &N);
    for(int i = 0; i<N; i++){
        scanf("%d", &X);
        if(X > Max){
            Max = X;
        }
    }
    printf("%d", Max);
    return 0;
}

// To set minimum number as Max for Integer
// #include<limits.h>
// int max = INT_MIN