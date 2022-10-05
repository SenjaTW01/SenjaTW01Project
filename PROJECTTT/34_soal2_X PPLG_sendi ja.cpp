#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()
{
char nama[50],ttl[30],alamat[25],nomber[10],input;
int umur;
home:
clrscr();
cout<<"Input Nama Anda        : ";gets(nama);
cout<<"Tanggal Lahir          : ";cin>>umur;
cout<<"Tempat Lahir           : ";gets(ttl);
cout<<"Alamat anda            : ";gets(alamat);
cout<<"Nomber anda            : ";gets(nomber);
cout<<endl;
cout<<"                BIODATA SAYA              "<<endl;
cout<<"=============================================================="<<endl;
cout<<"Nama Anda              :"<<nama<<endl;
cout<<"Tempat tanggal lahir   :"<<ttl<<endl;
cout<<"Alamat anda            :"<<alamat<<endl;
cout<<"Nomber anda            :"<<nomber<<endl;
cout<<"=============================================================="<<endl;
cout<<"                INGN INPUT ULANG  ? [Y/N]  : ";cin>>input;
if(input=='Y'||input=='Y')
goto home;
else goto end;
end:
getch();
}

