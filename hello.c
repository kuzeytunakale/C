#include <stdio.h>
#include <math.h>

int main() {
    int number, a, digit, sum;
    digit, sum = 0;
    printf("Rakamlarının toplamını öğrenmek istediginiz sayıyı giriniz: ");
    scanf("%d", &number);
    a = number;

    while (a != 0) {
        a /= 10;
        digit++;
    }

    for (int i = 0; i < digit; i++)
	{
        sum += ((number % ((int)pow(10, (digit - i)))) - (number % ((int)pow(10, (digit - i - 1))))) / (int)pow(10, (digit - i - 1));
    }

    printf("Girdiğiniz sayının rakamlarinın toplamı %d\n", sum);

    return 0;
}