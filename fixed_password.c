// #include<stdio.h>
// int main()
// {
//     int X;
//     for(int i=1000; i<=9999; i++){
//         scanf("%d", &X);
//         if(X != 1999){
//             printf("Wrong\n");
//         }
//         else if(X == 1999){
//             printf("Correct");
//             break;
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int X;
    while(scanf("%d", &X)){
        if(X == 1999){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}