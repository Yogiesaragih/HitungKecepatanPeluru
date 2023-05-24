#include <stdio.h>
#include <math.h>
int main()
{
int kecepatan,sudut;
double jarak;

printf("Masukkan kecepatan lingkaran \t\t : ");
scanf("%d", &kecepatan);
printf("Masukkan sudut lingkaran \t\t : ");
scanf("%d", &sudut);
printf("\n");
printf("\n");

jarak= 2*kecepatan*kecepatan*sin(sudut*3.14/180)*cos(sudut*3.14/180)/9.8;


printf ("Maka Jaraknya = %f", jarak);
printf("\n");
printf("\n");
printf(" \t\t\t * Terima kasih telah menggunakan program ini :) * ");
return 0;
}
