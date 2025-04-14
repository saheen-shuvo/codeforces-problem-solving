#include<stdio.h>
int main()
{
    int N, Mul;
    scanf("%d", &N);
    for(int i = 1; i <= 12; i++){
        Mul = N * i;
        printf("%d * %d = %d\n", N, i, Mul);
    }
    return 0;
}