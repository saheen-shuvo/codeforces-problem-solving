#include<stdio.h>
int main()
{
    int A, B, C, Max, Min;
    scanf("%d %d %d", &A, &B, &C);
    if(A >= B && A >= C){
        Max = A;
    }
    else if(B > A && B > C){
        Max = B;
    }
    else{
        Max = C;
    }
    if(A <= B && A <= C){
        Min = A;
    }
    else if(B < A && B < C){
        Min = B;
    }
    else{
        Min = C;
    }
    printf("%d %d", Min, Max);
    return 0;
}