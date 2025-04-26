#include<stdio.h>
#include<string.h>
int main()
{
    char A[11], B[11];
    scanf("%s %s", A, B);
    printf("%d %d\n", strlen(A), strlen(B)); 
    printf("%s%s\n", A,B);
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s", A, B);
    return 0;
}