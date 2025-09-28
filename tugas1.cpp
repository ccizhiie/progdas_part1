
#include <stdio.h>

int main() {
    char nama[50];    // variabel untuk menyimpan nama mahasiswa
    int nim;          // variabel untuk menyimpan NIM mahasiswa
    float ipk;        // variabel untuk menyimpan IPK mahasiswa

    // Input data mahasiswa
    printf("Masukkan nama Anda: ");
    scanf("%s", nama); // untuk input nama (jika nama hanya satu kata)

    printf("Masukkan NIM Anda: ");
    scanf("%d", &nim);

    printf("Masukkan IPK Anda: ");
    scanf("%f", &ipk);

    // Output data mahasiswa
    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %d\n", nim);
    printf("IPK: %.2f\n", ipk);

    return 0; // program selesai
}
