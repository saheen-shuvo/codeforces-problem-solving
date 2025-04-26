#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    int val=1;
    scanf("%s", &S);
    for(int i=0, j=strlen(S)-1; i<=j ; i++, j--){
        if(S[i] != S[j]){
            val=0;
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