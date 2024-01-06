#include <stdio.h>

int main() {
    double sayi1, sayi2, sonuc;
    char operatör;

    // Kullanýcýdan giriþleri alma
    printf("Ýki sayý girin: ");
    scanf("%lf %lf", &sayi1, &sayi2);

    printf("Ýþlemi seçin (+, -, *, /): ");
    scanf(" %c", &operatör);  // Boþluk býrakýlarak bir sonraki karakterin alýnmasýný saðlar

    // switch-case yapýsý kullanarak hesaplama
    switch (operatör) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
            } else {
                printf("Hata! Sýfýra bölme hatasý.\n");
                return 1;  // Programý hata durumunda sonlandýr
            }
            break;
        default:
            printf("Geçersiz operatör!\n");
            return 1;  // Programý hata durumunda sonlandýr
    }

    // Sonucu ekrana yazdýrma
    printf("Sonuç: %lf\n", sonuc);

    return 0;
}

