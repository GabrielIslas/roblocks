#include <stdio.h>
#include "find.h"
#include "odd.h"
#include "max.h"
#include "min.h"


int main(){
    
    int arrayTest[] = {1,2,3,4,5,6,7,8,9,10};
    
    //find test
    int findTest1 = find(arrayTest, 10, 4);
    int findTest2 = find(arrayTest, 10, 11);

    if(findTest1 == -1){
        printf("find1 isn't in the array\n");
    }
    else{
        printf("find1 is in position %d\n", findTest1);
    }

    if(findTest2 == -1){
        printf("find2 isn't in the array\n");
    }
    else{
        printf("find2 is in position %d\n", findTest2);
    }

    //odd test
    int oddTest = odd(arrayTest, 10);
    printf("There are %d odd numbers in the array\n", oddTest);

    //max test
    int maxTest = max(arrayTest, 10);
    printf("Max number is in position %d\n", maxTest);

    //min test
    int minTest = min(arrayTest, 10);
    printf("Min number is in position %d\n", minTest);
}