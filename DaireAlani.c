#include<stdio.h>
#include <stdlib.h>

int main()
{
    const double PI = 3.1415926535;
    char cev_alan;
    int r;
    goto aa;

    aa:
    cev_alan = 'm';
    printf("\nDairenin (c)evresini mi yoksa (a)lanını mı öğrenmek istersiniz?  :  ");
    scanf("%c", &cev_alan);

    if ((cev_alan != 'a') && (cev_alan != 'c')) {
        printf("Anlaşılamayan bir değer girdiniz! Yeniden griniz.");
        goto aa;
    }

    printf("Yarıçapi kaç:  ");
    scanf("%d", &r);


    switch (cev_alan){
        case 'c':
            printf("Çevre: %lf\n", 2 * PI * r);
            exit(0);
            break;
        
        case 'a':
            printf("Alanı: %lf\n", PI * r * r);
            exit(0);
            break;

    }

    return 0;
}


