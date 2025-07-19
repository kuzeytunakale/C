#include <stdio.h>
#include <math.h>

int main() {
    int number = 1234, a = number, basamak = 0, sum = 0;
    while (a != 0) {
        a /= 10;
        basamak++;
    }

    for (int i = 0; i < basamak; i++)
	{ /*
        printf("\n%d\n", (number % ((int)pow(10, (basamak - i)))));
        printf("\n%d\n", (number % ((int)pow(10, (basamak - i - 1)))));
        */
        sum += ((number % ((int)pow(10, (basamak - i)))) - (number % ((int)pow(10, (basamak - i - 1))))) / (int)pow(10, (basamak - i - 1));

        printf("%d\n", sum);

    
    }

    return 0;
}
