// Program Hitung_Deret
#include<stdio.h>
#include<conio.h>

int angka; //variabel global
int hasil,bil; //variabel global
int hitungDeret(int bil);
// Program Utama
main()
{
	//program utama
	printf("Masukkan Angka Batas Deret : ");
	scanf("%i",&angka);
	hasil=hitungDeret(angka);
	printf("Jumlah deret : %i",hasil);
}
int hitungDeret(int bil)
{
	int a;
	if(bil==0)
		return 0;
	else
		return (bil+hitungDeret(bil-1));
}

