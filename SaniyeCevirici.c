#include<stdio.h>

int main() {
    int inp_second, second, minute, hour, day;
    
    while(1) {
        printf("Çevirmek istediğiniz saniye değerini giriniz: ");
        scanf("%d", &inp_second);
        
        second = inp_second % 60;
        minute = inp_second / 60;
        hour = minute / 60;
        

        printf("Saat.Dakika.Saniye = %d.%d.%d\n", hour, minute, second);
777
    }

}