#include<iostream.h>
#include<conio.h>

int main()
{
int nilai,hasil,count=0;
	 bool Prima = true;
	cout<<"Menentukan Bilangan Prima atau Bukan Prima  \n";
   cout<<"========================================\n";
	cout<<"Masukan Nilai = ";cin>>nilai;
   cout<<"Hasilnya adalah = ";
   for(hasil=2; hasil <= nilai/2; ++hasil)
   {
  		 if (nilai%hasil==0)
       {
   			Prima = false;
         	break;
       }
   }
   if(Prima)
   	cout<<"Bilangan Prima";
   else
   	cout<<" Bilangan Bukan Prima";
   getch();
}
