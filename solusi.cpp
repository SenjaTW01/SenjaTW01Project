#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>
main()
{
char nis[100],nama[100],hasil_ajuan[100];
int prestasi,sktm;
printf("NIS:");
scanf("%s",&nis);
printf("NAMA:");
scanf("%s",&nama);
printf("SKTM (1)Ada, (0)Tidak:");
scanf("%d",&sktm);
printf("PRESTASI (1)Ada, (0)Tidak:");
scanf("%d", &prestasi);
if (sktm==1||prestasi==1)
{
strcpy(hasil_ajuan,"Belum Beruntung KDL");
}
printf("Hasil akhir ajuan saudara : %s", hasil_ajuan);
getch();
}kami
