#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
main() 
{ 
char a1[50] = "UHHHUY";
char a2[50] = "UHHYY";
char b1[50] = "UHUYY";
clrscr();
cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->"; 
cout<<strcmp(a1,a2)<<endl;
cout<<"Hasil Perbandingan "<<a2<<" dan "<<a2<<"->"; 
cout<<strcmp(a2,a1) <<endl; 
cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->"; 
cout<<strcmp(a1,b1) <<endl; 
getch();
}