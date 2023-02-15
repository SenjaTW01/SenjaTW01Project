#include <stdio.h>
#include <iostream.h>
#include <stdio.h>
#include <fstream.h>
#include <process.h>
main()
{
ofstream kertas;
kertas.open("coba.txt");
kertas<<"hello dunia yang kejam";
kertas.close();
printf("silahkan tekan enter untuk print....");
getch();
system("nodepad /p coba.txt");
printf("\nprintinggggg......");
getch();
}
