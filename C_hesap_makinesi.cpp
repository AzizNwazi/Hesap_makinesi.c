#include <stdio.h>

int main() {
    double sayi1, sayi2, sonuc;
    char operat�r;

    // Kullan�c�dan giri�leri alma
    printf("�ki say� girin: ");
    scanf("%lf %lf", &sayi1, &sayi2);

    printf("��lemi se�in (+, -, *, /): ");
    scanf(" %c", &operat�r);  // Bo�luk b�rak�larak bir sonraki karakterin al�nmas�n� sa�lar

    // switch-case yap�s� kullanarak hesaplama
    switch (operat�r) {
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
                printf("Hata! S�f�ra b�lme hatas�.\n");
                return 1;  // Program� hata durumunda sonland�r
            }
            break;
        default:
            printf("Ge�ersiz operat�r!\n");
            return 1;  // Program� hata durumunda sonland�r
    }

    // Sonucu ekrana yazd�rma
    printf("Sonu�: %lf\n", sonuc);

    return 0;
}

