#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define StringLength    (256/4) // (Bits you want)/4

int main(void){
    char cStrHex[(StringLength+1)] = {0};

    // Seed random:
    srand((unsigned int) time(0));

    // Fill the char buffer
    int i=0;
    for(; i < StringLength; i++){
        sprintf(cStrHex+i, "%x", rand() % 16);
    }

    // Print hex string:
    printf("%s\n", cStrHex);

    return 0;
}