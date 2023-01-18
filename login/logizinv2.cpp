#include <iostream.h>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
 int main()
{

 char kode[20],u[50],p[50];
     char str [100]="abcdefghijklmnopqrstuvwxyz1234567890";
	  char karakter;
ulang:
   cout<<"====LOGIN===!"<<endl;
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