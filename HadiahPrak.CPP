#include<conio.h>
#include<iostream.h>

main()
{
float pndptn,jasa=0,komisi=0,total=0;
clrscr();
	cout<<"============================================"<<endl;
	cout<<"Pendapatan Yang Diperoleh Hari Ini Rp. = ";cin>>pndptn;
   if (pndptn >= 0 && pndptn <= 2000000)
   	{
      jasa=500000;
      komisi=0.1*pndptn;
      }
   else
   	if(pndptn <=5000000)
      {
      jasa=500000;
      komisi=0.15*pndptn;
       }
   else
       {
   	jasa=1000000;
      komisi=0.2*pndptn;
      }

	/*menghitung total*/
   total = komisi+jasa;
   cout<<"Uang Jasa    Rp. =  "<<jasa<<endl;
   cout<<"Uang Komisi  Rp. =  "<<komisi<<endl;
   cout<<"=========================="<<endl;
   cout<<"Hasil Total Rp. =  "<<total<<endl;

   getch();
}

