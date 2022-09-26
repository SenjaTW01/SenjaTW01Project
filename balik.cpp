#include <stdio.h>

#include <conio.h>

#include <iostream.h>

main()

{

struct

 {

 char nm[20],kd,*kls;

 int hrg,pot,p,ttl;

 }krs [8];

char lagi;

int u,f;

atas:

clrscr();

cout<<endl;

cout<<"Bentuk Data Masukan"<<endl;

cout<<"********************"<<endl;

cout<<"JUmlah data :       ";cin>>f;

for(u=1;u<=f;u++)

{

cout<<"data ke-  :"<<u<<endl;

cout<<"nama siswa :";gets(krs[u].nm);

cout<<"Masukan kode kelas Anda:[R/P/I]?";cin>>krs[u].kd;

if(krs[u].kd=='R')

{krs[u].kls="Reguler";krs[u].hrg=800000;}

else if(krs[u].kd=='P')

{krs[u].kls="Private";krs[u].hrg=1000000;}

else

{krs[u].kls="intensif";krs[u].hrg=500000;}

cout<<"Pringkat di sekolah [1/2/3]  :";cin>>krs[u].p;

if(krs[u].p==1)

{krs[u].pot=0.5*krs[u].hrg;}

else if(krs[u].p==2)

{krs[u].pot=0.2*krs[u].hrg;}

else

{krs[u].pot=0.1*krs[u].hrg;}

}

clrscr();

cout<<"\t\t Bimbingan Belajar Bina Akhlak"<<endl;

cout<<"==============================================="<<endl;

cout<<endl;

gotoxy(3,4);cout<<"No.";

gotoxy(7,4);cout<<"Nama Siswa";

gotoxy(22,4);cout<<"Kelas";

gotoxy(30,4);cout<<"Pringkat";

gotoxy(40,4);cout<<"Harga";

gotoxy(48,4);cout<<"Potongan";

gotoxy(57,4);cout<<"total";

for(u=1;u<=f;u++)

{

gotoxy(4,5+u);cout<<u;

gotoxy(7,5+u);cout<<krs[u].nm;

gotoxy(22,5+u);cout<<krs[u].kls;

gotoxy(34,5+u);cout<<krs[u].p;

gotoxy(40,5+u);cout<<krs[u].hrg;

gotoxy(48,5+u);cout<<krs[u].pot;

krs[u].ttl=krs[u].hrg-krs[u].pot;

gotoxy(57,5+u);cout<<krs[u].ttl;

}

cout<<"\n======================================================"<<endl;

cout<<"Mau input data lagi :";cin>>lagi;

if(lagi=='y'||lagi=='Y')

goto atas;

else

goto akhir;

akhir:

getch();

}kami
