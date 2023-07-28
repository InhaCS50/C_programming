#include <stdio.h>

int main() {
    int rows;

    printf("uzunligini kiriting: ");
    scanf("%d", &rows);

    for (int i = 1, k = 0; i <= rows; i++, k = 0) {
        while (k < rows - i) {
            printf(" ");
            k++;
        }
        while (k < rows) {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}
