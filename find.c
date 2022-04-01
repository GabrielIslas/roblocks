#include <stdio.h>
#include "find.h"

int main(){
    int arr[] = {5, 3, 4, 8, 1};
    int result1 = find(arr, 5, 8);
    int result2 = find(arr, 5, 4);
    int result3 = find(arr, 5, 9);
    printf("%d %d %d\n", result1, result2, result3);
}