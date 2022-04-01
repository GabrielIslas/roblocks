int odd(int array[], int len) {
    int numberOdd = 0;
    for(int i=0; i<5; i++) {
        if(array[i]%2!=0)
            numberOdd++;
    }
    return numberOdd;
}
