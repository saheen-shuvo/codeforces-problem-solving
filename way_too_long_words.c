#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    char arr[T][101];
    for(int i=0; i<T; i++){
        scanf("%s", &arr[i]);
    }
    for(int i=0; i<T; i++){
        if(strlen(arr[i]) <= 10){
            printf("%s\n", arr[i]);
        }
        if(strlen(arr[i]) > 10){
            printf("%c", arr[i][0]);
            printf("%d", strlen(arr[i])-2);
            printf("%c\n", arr[i][strlen(arr[i])-1]);
        }
    }
    return 0;
}