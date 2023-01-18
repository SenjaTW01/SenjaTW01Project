                  #include <iostream.h>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

struct nasabah{
  char nama[50];
  char alamat[30];
  long int norek;
  double saldo;
 };

int main()
{
  int n=0;
  nasabah nas[50];
  int i,pil,pos;
  char x;
  long int no;
  double setor,tarik;
  bool ketemu=false;

  // VARIABEL UNTUK PASWORD

     char kode[20],u[50],p[50];
     char str [100]="abcdefghijklmnopqrstuvwxyz1234567890";
	  char karakter;

   cout<<"*****SELAMAT DATANG DI BANK RPL*****"<<endl;
	cout<<"=================================================="<<endl;
	cout<<" PEMBUAT  : KELOMPOK 3"<<endl;
	cout<<" ANGGOTA  : AJI->SENDI->GYIYAS"<<endl;
	cout<<" TENTANG  : TUGAS AKHIR SEMESTER GANJIL"<<endl;
	cout<<" STATUS   : MEMBUAT BANK RPL"<<endl;
	cout<<"=================================================="<<endl;

   ulang:
   cout<<"====LOGIN UNTUK MEMULAI APP===!"<<endl;
   cout<<"Username  : ";gets(u);
   cout<<"Password  : ";


   for(int a=0;a<50;a++){
       karakter=getch();

      if(karakter=='\r'){
			p[a]=0;
         break;
		}else if(karakter=='\b'){
			if(a!=0)
         cout<<"\b \b";
			p[a]=0;
			p[a-1]=0;
			a-=2;

         if(a<-1)a=-1;
         continue;
		}else if(strchr(strupr(str),karakter)-str<=35&&strchr(strupr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else if(strchr(strlwr(str),karakter)-str<=35&&strchr(strlwr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else{
         if(a>0){
           a-=1;
         }
      }
	}

   if((strcmp(u,"smkn1ciamis")==0)&&(strcmp(p,"z9910i8o")==0)){
      system("cls");
       cout<<"<--Anda telah berhasl login-->"<<endl;
         goto lanjut;
   }else{
   system("cls");
   cout<<"       <--Login...Gagal-->  "<<endl;
     goto ulang;

   }


  lanjut:
  naik:
  menu:
  system("cls");
  cout<<" ____________________________________________________ "<<endl;
  cout<<"|                BANK RPL BERKAH JAYA                |"<<endl;
  cout<<"|_________________ Menu Transaksi____________________|"<<endl;
  cout<<"|____________________________________________________|"<<endl;
  cout<<"|    1. Pendaftaran Nasabah                          |"<<endl;
  cout<<"|    2. Menabung                                     |"<<endl;
  cout<<"|    3. Penarikan                                    |"<<endl;
  cout<<"|    4. Cetak Daftar Nasabah                         |"<<endl;
  cout<<"|    5. Cari Nasabah                                 |"<<endl;
  cout<<"|    6. Keluar                                       |"<<endl;
  cout<<"|____________________________________________________|"<<endl;
  cout<<" Pilihan Anda : "; cin>>pil;
  if(pil==1)
  {
  lagi:
  cout<<endl;
  cout<<"======================================================"<<endl;
  cout<<" Masukan Nomer Rekening : "; cin>>no;
  for(i=0; i<n; i++)
  {
  if(no==nas[i].norek)
  ketemu=true;
  else
  ketemu=false;
  }
  if(ketemu)
  {
  cout<<" Nomer Rekening Tersebut Sudah Ada, Ulangi Lagi"<<endl;
  goto lagi;
  }
  else
  {
  cout<<"======================================================"<<endl;
  cout<<" Masukan Nama Anda      : "; cin>>nas[n].nama;
  cout<<" Masukan Alamat         : "; cin>>nas[n].alamat;
  cout<<" Masukan Saldo Awal     : Rp."; cin>>nas[n].saldo;
  }
  n=n+1;
  nas[i].norek=no;
  cout<<"======================================================"<<endl;
  cout<<"Ketik (y) untuk kembali ke menu utama :";cin>>x;
  goto menu;
  }
  else if(pil==2)
  {
  cout<<endl;
  cout<<"======================================================"<<endl;
  cout<<" Masukan Nomer Rekening  : "; cin>>no;
  for(i=0; i<n; i++)
  {
  if(no==(nas[i].norek))
  {
  pos=i;
  ketemu=true;
  break;
  }
  else
  ketemu=false;
  }
  if(ketemu)
  {
  cout<<"======================================================"<<endl;
  cout<<" Masukan Nominal Setoran : Rp."; cin>>setor;
  nas[pos].saldo=nas[pos].saldo+setor;
  cout<<" <---Setoran Behasil ditambahkan--->"<<endl;
  cout<<" Jumlah Saldo Anda       : Rp."<<nas[pos].saldo<<endl;
  cout<<endl;
  cout<<"Ketik (y) untuk kembali ke menu utama :";cin>>x;
  goto menu;

  }
  else{
  cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
   cout<<"Ketik (y) untuk kembali ke menu utama :";cin>>x;
  goto menu;}

  }
  else if(pil==3)
  {
  cout<<endl;
  cout<<"======================================================"<<endl;
  cout<<" Masukan Nomer Rekening   : "; cin>>no;
  for(i=0; i<n; i++)
  {
  if(no==(nas[i].norek))
  {
  pos=i;
  ketemu=true;
  break;
  }
  else
  ketemu=false;
  }
  if(ketemu)
  {
  cout<<"======================================================"<<endl;
  cout<<" Masukan Jumlah Penarikan : Rp."; cin>>tarik;
  if(tarik<(nas[pos].saldo))
  {
  nas[pos].saldo=nas[pos].saldo-tarik;
  cout<<" Penarikan Berhasil"<<endl;
  cout<<" Sisa Saldo Anda          : Rp."<<nas[pos].saldo<<endl;
  cout<<endl;
  }
  else
  cout<<" Maaf Saldo Anda Tidak Mencukupi"<<endl;
  }
  else
  cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
   cout<<"Ketik (y) untuk kembali ke menu utama :";cin>>x;
  goto menu;
  }
  else if(pil==4)
  {
  cout<<endl;
  cout<<" ====================================================================== "<<endl;
  cout<<"                             DAFTAR NASABAH BANK                        "<<endl;
  cout<<"|====|=================|==============|==============|=================|"<<endl;
  cout<<"| No |   No Rekening   |     Nama     |    Alamat    |   Total Saldo   |"<<endl;
  cout<<"|====|=================|==============|==============|=================|"<<endl;
  for(i=0; i<n; i++)
  {
  cout<<setw(4)<<i+1;
  cout<<setw(12)<<nas[i].norek;
  cout<<setw(17)<<nas[i].nama;
  cout<<setw(15)<<nas[i].alamat;
  cout<<setw(18)<<((nas[i].saldo)+(nas[i].saldo*0.1))<<endl;
  }
  cout<<"|====|=================|==============|==============|=================|"<<endl;
  cout<<endl;
  cout<<" Jumlah Total Saldo Diatas Setelah Ditambah Bunga 10%"<<endl<<endl;
   cout<<"Ketik (y) untuk kembali ke menu utama :";cin>>x;
  goto menu;
  }
  else if(pil==5)
  {
  cout<<endl;
  cout<<"======================================================"<<endl;
  cout<<" Masukan Nomer Rekening Yang Akan Dicari : "; cin>>no;
  cout<<endl;
  for(i=0; i<n; i++)
  {
  if(no==(nas[i].norek))
  {
  pos=i;
  ketemu=true;
  break;
  }
  else
  ketemu=false;
  }
  if(ketemu)
  {
  cout<<" Nomer Rekening             : "<<nas[pos].norek<<endl;
  cout<<" Nama Nasabah               : "<<nas[pos].nama<<endl;
  cout<<" Alamat                     : "<<nas[pos].alamat<<endl;
  cout<<" Saldo                      : Rp."<<nas[pos].saldo<<endl;
  cout<<" Total  Saldo Setelah Bunga : Rp."<<((nas[i].saldo)+(nas[i].saldo*0.1))<<endl<<endl;
  }
  else
  cout<<" Nomer Rekening Tidak Ditemukan"<<endl<<endl;
  cout<<"Ketik (y) untuk kembali ke menu utama :";cin>>x;
  goto menu;
  }
  else
  {
  cout<<"<----Terima Kasih Telah Menggunakan Jasa Kami---->"<<endl;
  cout<<"           ......................               "<<endl;
  }
  getch();
}
