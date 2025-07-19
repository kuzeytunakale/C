#include <stdio.h>
#include <math.h>

int main() {
    int number = 1234, a = number, basamak = 0;
    while (a != 0) {
        a /= 10;
        basamak++;
    }

    for (int i = 0; i < basamak; i++)
	{ 
        printf("\n%d\n", (number % ((int)pow(10, (basamak - i)))));
    
    }

    return 0;
}
