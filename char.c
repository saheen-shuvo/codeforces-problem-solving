#include<stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if(X >= 'A' && X <= 'Z'){
        X = X + 32;
    }
    else{
        X = X -32;
    }
    printf("%c", X);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     char X;
//     scanf("%c", &X);
//     int value = X;
//     if(X >= 65 && X <= 90){
//         value = value + 32;
//     }
//     if(X >= 97 && X <= 122){
//         value = value - 32;
//     }
//     X = value;
//     printf("%c", X);
//     return 0;
// }