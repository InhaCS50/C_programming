#include <stdio.h>

int main() {
    int sonlar, teskari = 0;

    printf("Sonlar kiriting: ");
    scanf("%d", &sonlar);

    while (sonlar != 0) {
        int digit = sonlar % 10;
        teskari = teskari * 10 + digit;
        sonlar /= 10;
    }

    printf("Teskari sonlar: %d\n", teskari);

    return 0;
}
