#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int jumlah;
char huruf [10],nis [100];
float nilai;
printf("masukan sebuah bilangan bulat : ");
scanf("%d", &jumlah);
printf("masukan sebuah karakter : ");
scanf("%s", &huruf);
printf("masukan nis anda : ");
scanf("%s", &nis);
printf("masukan sebuah bilangan pecahan : ");
scanf("%f",&nilai);
printf("\nNilai veriable yang anda masukan adalah :\n");
printf("jumlah = %d\n", jumlah);
printf("huruf = %s\n", huruf);
printf("nis = %s \n", nis);
printf("pecahan = %f \n",nilai);
getch();
}
