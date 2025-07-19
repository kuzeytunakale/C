#include <stdio.h>
#include <math.h>

int main() {
    int number = 1234, a = number, basamak = 0;
    double ss = 0;
    while (a != 0) {
        a /= 10;
        basamak++;
    }

    for (int i = 1; i <= basamak; i++)
	{
        ss = pow(10, (basamak - i));
		printf("\n%lf\n", ss);
    
    }

    return 0;
}
