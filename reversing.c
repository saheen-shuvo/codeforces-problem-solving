#include<stdio.h>
int main()
{
    int N, temp;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0, j=N-1; i<=j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}