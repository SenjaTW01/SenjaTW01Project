#include<conio.h>

#include<string.h>

#include<stdio.h>

#include<iostream.h>

  main()

{

 int A,B,G[10],E,harga[10],pot[10],tobar[10];

 char C[25][100],D[10],F[10][50];

 cout<<"Jumlah data = ";cin>>B;

 for (A=1;A<=B;A++){

      cout<<"Data ke : "<<A;

      cout<<"\nNama Siswa = ";gets(C[A]);

      cout<<"Masukan kode kelas anda [R/P/I] = ";cin>>D[A];

      if (D[A] == 'R') {

          strcpy(F[A],"Reguler");

          harga[A] = 800000; }

      else if (D[A] == 'P') {

          strcpy(F[A],"private");

          harga[A] = 1000000; }

      else if (D[A] == 'I') {

 		    strcpy(F[A],"private");

          harga[A] = 500000; }

      cout<<"Peringkat kelas [1/2/3] = ";cin>>G[A];

      if (G[A] == 1) {

      	 pot[A] = harga[A] * 0.5;

          tobar[A] = harga[A]- pot[A]; }

      else if (G[A] == 2) {

      	 pot[A] = harga[A] * 0.2;

          tobar[A] = harga[A] - pot[A]; }

      else if (G[A] == 3) {

          pot[A] = harga[A] * 0.1;

          tobar[A] = harga[A] - pot[A]; }

      }

 clrscr();

 cout<<"                                         Bimbingan belajar bina akhlak"<<endl;

 cout<<"================================================================================================================"<<endl;

 cout<<"\n\tNo\tNama Siswa\tKelas\t Peringkat\tHarga\t\tPotongan\tTotal"<<endl;

 for (E=1;E<=B;E++) {

       cout<<"\n\t"<<E<<"\t"<<C[E]<<"\t\t"<<F[E]<<"  "<<G[E]<<"\t\t"<<harga[E]<<"\t\t"<<pot[E]<<"\t\t"<<tobar[E]; }

 cout<<"\n=============================================================================================================="<<endl;

 getch();

 }

kami
