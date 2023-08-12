#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    // Generate a random number and assign it to n
    srand(time(0));
    n = rand();

    printf("The number %d ", n);
    
    if (n > 0) {
        printf("is positive");
    } else if (n < 0) {
        printf("is negative");
    } else {
        printf("is zero");
    }
    
    printf("\n");
    
    return 0;
}
