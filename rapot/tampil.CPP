#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define max 10

char sis[20];
char loop;
int pos = 0;

void add(){
	do{
   	if(pos < max){
         cout<<"Tambah Data :";
         cin>> sis;
         pos++;
      }else{
         cout<< "<---memori penuh--->" <<endl;
   		cout<<"isi t untuk kembali: ";
      	cin >> loop;
      }
      cout<<"ulangi (y/t):";
         cin>>loop;
   }while(loop == 'y');
}

int main(){
	int pil;
   do{
   clrscr();

 cout<<"1. Tambah data\n2. Edit data\n3. Tampilkan\n4. Hapus data\n5. Keluar"<<endl;
 cout<<"PILIHAN ANDA :";
 cin>>pil;
 switch(pil){
 	case 1:
   	 cout<<"TAMBAH DATA";
       break;
  case 2:
   	 cout<<"EDIT DATA";
       break;
  case 3:
   	 cout<<"TAMPILKAN";
       break;
  case 4:
   	 cout<<"HAPUS DATA";
       break;
  case 5:
   	 cout<<"Anda sudah Keluar";
       break;
       default:
       cout<<"PILIH 1-5"<<endl;
       break;
 }
getch();
}while(pil !=5);
 cout<<"Program selesai...";
}
