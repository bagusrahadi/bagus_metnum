//Program menghitung 2 buah bilangan

#include <stdio.h>
#include <conio.h>

void Menu()
{
    printf("Menu Pilihan\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Pilihan Anda ?\n\n");
}
void Penjumlahan(int a,int b)
{
    int Hasil;
    Hasil = a + b;
    printf("Hasilnya adalah = %d \n",Hasil);
}
void Pengurangan(int a,int b)
{
    int Hasil;
    Hasil= a - b;
    printf("Hasilnya adalah = %d \n",Hasil);
}
void Perkalian(int a,int b)
{
    int Hasil;
    Hasil = a * b;
    printf("Hasilnya adalah = %d \n",Hasil);
}
void Pembagian(int a,int b)
{
    float Hasil;
    Hasil = a / b;
    printf("Hasilnya adalah = %f \n",Hasil);
}
main()
{
    int pilih,angka_1,angka_2,a,b;
    do
    {
        Menu();
        scanf("%d",&pilih);
        printf("\n");
        switch (pilih)
        {
            case 1 :    printf("Masukkan Angka ke-1 = ");
                        scanf("%d",&angka_1);
                        printf("Masukkan Angka ke-2 = ");
                        scanf("%d",&angka_2);
                        Penjumlahan(angka_1,angka_2);
                        printf("\n");
                        break;
            case 2 :    printf("Masukkan Angka ke-1 = ");
                        scanf("%d",&angka_1);
                        printf("Masukkan Angka ke-2 = ");
                        scanf("%d",&angka_2);
                        Pengurangan(angka_1,angka_2);
                        printf("\n");
                        break;
            case 3 :    printf("Masukkan Angka ke-1 = ");
                        scanf("%d",&angka_1);
                        printf("Masukkan Angka ke-2 = ");
                        scanf("%d",&angka_2);
                        Perkalian(angka_1,angka_2);
                        printf("\n");
                        break;
            case 4 :    printf("Masukkan Angka ke-1 = ");
                        scanf("%d",&angka_1);
                        printf("Masukkan Angka ke-2 = ");
                        scanf("%d",&angka_2);
                        Pembagian(angka_1,angka_2);
                        printf("\n");
                        break;
            case 5 :	printf("Anda memilih Keluar........bye");break;
            default : printf("Pilihan Anda Salah\n");
		  }
	 }
	 while(pilih!=5);
}


