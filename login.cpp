kami#include <iostream.h>

#include <stdio.h>

#include <conio.h>



main()

{

	int i,tum=0;

   char user[1000],pass[1000] = "rizki",t;

   cout<<"=====LOGIN========"<<endl;

   ulang:

   cout<<"USERNAME = ";gets(user);

   cout<<"PASSWORD = ";

   for (i=0;i<=5;i++) {

   t = getch();

   cout<<"*";

   	if (t == pass[i]) {

      tum = tum + 1;

      }

}

if ((strcmp(user,"senja") == 0) && tum == 5) {

	clrscr();

   cout<<user<<" LOGIN BERHASIL"<<endl;

}

else {

	clrscr();

   cout<<"ADA YANG SALAH "<<endl;

   tum = 0;

   goto ulang;

   }

   getch();

}


