#include <iostream.h>
#include <stdio.h>
#include <conio.h>

char nama[50],ket[50],grade;
int absen,kls,indo,dpk,inggris,sigit,mtk,pai,sej,ipas,sunda,sen_bud,pkn;
float rata_rata;

void read(){
int pil;
char ul;
 cout<<"LOGIN SEBAGAI :"<<endl;
 cout<<"=============="<<endl;

   cout<<"1. Guru\n2. Siswa\n";
   cout<<"Kode \t:";
   cin>>pil;
   clrscr();
  switch(pil){
    case 1:
      cout<<"Kamu masuk sebagai guru"<<endl;
      break;
    case 2:
      cout<<"Kamu masuk sebagai Siswa"<<endl;
      break;
    default:
     cout<<"Kode salah"<<endl;
     break;

    }while(pil=='Y' || pil=='y'){
     clrscr();
     cout<<"Ulangi[Y/N]:";
     cin>>ul;
   }
 }



int main(){
   read();

   int i,tum=0;
   char user[1000],pass[1000] = "smkbisa",t;

   ulang:
   cout<<"Masukan Username\t:";gets(user);
   cout<<"Masukan Pasword\t\t:";
   for (i=0;i<=7;i++) {
   t = getch();
   cout<<"*";
   	if (t == pass[i]) {
      tum = tum + 1;
      }
}
if ((strcmp(user,"admin") == 0) && tum == 7) {
	clrscr();
   cout<<user<<" SELAMAT DATANG DI RAPOT DIGITAL"<<endl;;
}
else {
	clrscr();
   cout<<"ADA YANG SALAH "<<endl;
   tum = 0;
   goto ulang;
   }
 cout<<"======================="<<endl;
 cout<<"Masukan Nama :";
 cin>>nama;
 cout<<"Masukan kelas :";
 cin>>kls;
 cout<<"Masukan no.Absen:";
 cin>>absen;
 clrscr();
 cout<<"Silahkan masukan semua nilai MAPEL"<<endl;
 cout<<"===================================="<<endl;
 cout<<"Nilai B.indonesia :";
 cin>>indo;
 cout<<"Nilai Pkn\t:";
 cin>>pkn;
 cout<<"Nilai DPK\t:";
 cin>>dpk;
 cout<<"Nilai inggris\t:";
 cin>>inggris;
 cout<<"Nilai Sigit\t:";
 cin>>sigit;
 cout<<"Nilai Matematika :";
 cin>>mtk;
 cout<<"Nilai PAI\t:";
 cin>>pai;
 cout<<"Nilai Sejarah:";
 cin>>sej;
 cout<<"Nilai B.sunda :";
 cin>>sunda;
 cout<<"Nilai senibudaya :";
 cin>>sen_bud;




getch();


}