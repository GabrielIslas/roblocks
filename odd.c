#include <stdio.h>

int main(){
    int a[5], i;
    printf("Enter 5 numbers \n");
    for( i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("Odd numers in array are: \n");
    for( i=0; i<5; i++)
        if(a[i]%2!=0)
            printf("%d \n", a[i]);       
}