#include<stdio.h>
int main()
{
    int N, val=1;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0, j=N-1; i<=j; i++, j--){
        if(arr[i] != arr[j]){
            val = 0;
        }
    }
    if(val==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}