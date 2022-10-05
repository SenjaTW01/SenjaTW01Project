#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char nm[8],alm[20],tlp[15];
const trf=200000;
int lm,jlm;
clrscr();
cout<<"\tStdio SENDI JA"<<endl;
cout<<"==========================================="<<endl;
cout<<"Isi Daftar Penyewa Berikut"<<endl;
cout<<"Nama Group		:";gets(nm);
cout<<"Alamat			:";cin>>alm;
cout<<"NO TLP			:";cin>>tlp;
cout<<"============================================="<<endl;
cout<<"Lama Rental	:";cin>>lm;
gotoxy(19,8);cout<<"jam";
jlm=(lm-1)*0.25*200000+trf;
cout<<"\nTOTAL BAYAR		:Rp."<<jlm<<endl;
cout<<"=================================================="<<endl;
cout<<"\tTERIMA KASIH"<<endl;
getch();
}
