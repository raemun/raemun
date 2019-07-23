#include <stdio.h>
#include <locale.h>
main()
{
	 setlocale(LC_ALL,"Turkish");
   int i,nu[10],nt[10][2]; float Dn[10];
   
   for(i=0;i<10;++i)
    {
	  printf("%d. öðrencinin numarasý :",i+1);
     scanf("%d",&nu[i]);
     printf("%d. öðrencinin vize notu :",i+1);
     scanf("%d",&nt[i][0]);
     printf("%d. öðrencinin final notu :",i+1);
     scanf("%d",&nt[i][1]);
     Dn[i]=0.5*(nt[i][0])+nt[i][1];
	 }
     
     printf("\n");
     printf("%2s%6s%6s%6s\n","No","V","F","DN");
     puts("-------------------");
     for (i=0;i<10;++i)
         printf("%3d%6d%6d%6.f\n",nu[i],nt[i][0],nt[i][1],Dn[i]);
}
