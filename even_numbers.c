#include<stdio.h>
int main()
{
    int N, X=0;
    scanf("%d", &N);
    for(int i=1; i <= N; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
            X=1;
        }
    }
    if(X==0){
        printf("-1");
    }
    return 0;
} 