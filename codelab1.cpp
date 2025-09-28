
#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("Hasil penjumlahan %d + %d = %d\n", a, b, sum);

    int diff = a - b;
    printf("Hasil pengurangan %d - %d = %d\n", a, b, diff);

    int product = a * b;
    printf("Hasil perkalian %d * %d = %d\n", a, b, product);

    if (b != 0) {
        int division = a / b;
        printf("Hasil pembagian %d / %d = %d\n", a, b, division);
    } else {
        printf("Error: Pembagian dengan nol tidak terdefinisi.\n");
    }

    return 0;
}
