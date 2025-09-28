
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nama[50];      // Variabel untuk menyimpan nama
    int umur;           // Variabel untuk menyimpan umur
    float gaji_pokok;   // Variabel untuk menyimpan gaji pokok

    // Input nama
    printf("Masukkan Nama: ");
    gets(nama); // diperbaiki: gunakan gets untuk string

    // Input umur
    printf("Masukkan Umur: ");
    scanf("%d", &umur); // diperbaiki: harus pakai &

    // Input gaji pokok
    printf("Masukkan Gaji Pokok: ");
    scanf("%f", &gaji_pokok);

     // Hitung tunjangan (10% dari gaji pokok)
    float tunjangan = gaji_pokok * 0.1;
    float total_gaji = gaji_pokok + tunjangan;

    // Output hasil
    printf("\n=== Data Karyawan ===\n");
    printf("Nama       : %s\n", nama);
    printf("Umur       : %d\n", umur);
    printf("Gaji Pokok : %.2f\n", gaji_pokok);
    printf("Tunjangan  : %.2f\n", tunjangan);
    printf("Total Gaji : %.2f\n", total_gaji);

    return 0; // diperbaiki: gunakan 0 untuk menandakan selesai
}
