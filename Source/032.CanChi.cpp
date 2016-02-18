//============================================================================//
// Unit 032		: Can chi
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "windows.h"
 main()
 {
  long n,c,ch;
  char dk,can[10],chi[10];
  while(!kbhit())
	 {
	 do
		{
             system("cls");
			//clrscr();
			printf("\nnhap so nam N= ");
			scanf("%d",&n);
			if (n<0) printf("\nvui long nhap lai!");
	  }
	  while (n<0);
	  if(n<3)
		 switch (n)
		  {
			 case 0:{strcpy(can,"canh"); strcpy(chi,"than");}break;
			 case 1:{strcpy(can,"tan"); strcpy(chi,"dau");}break;
			 case 2:{strcpy(can,"nham"); strcpy(chi,"tuat");}break;
		  }
	  else
		{
		  n=n-3;
		  c=n%10;
		  switch (c)
			{
			  case 1:  strcpy(can,"giap");break;
			  case 2:  strcpy(can,"at");break;
			  case 3:  strcpy(can,"binh");break;
			  case 4:  strcpy(can,"dinh");break;
			  case 5:  strcpy(can,"mau");break;
			  case 6:  strcpy(can,"ky");break;
			  case 7:  strcpy(can,"canh");break;
			  case 8:  strcpy(can,"tan");break;
			  case 9:  strcpy(can,"nham");break;
			  case 0:  strcpy(can,"quy");break;
			}
		  ch=n%12;
		  switch (ch)
			{
			  case 1: strcpy(chi,"ty(chuot)");break;
			  case 2: strcpy(chi,"suu");break;
			  case 3: strcpy(chi,"dan");break;
			  case 4: strcpy(chi,"mao");break;
			  case 5: strcpy(chi,"thin");break;
			  case 6: strcpy(chi,"ty(ran)");break;
			  case 7: strcpy(chi,"ngo");break;
			  case 8: strcpy(chi,"mui");break;
			  case 9: strcpy(chi,"than");break;
			  case 10: strcpy(chi,"dau");break;
			  case 11: strcpy(chi,"tuat");break;
			  case 0: strcpy(chi,"hoi");break;
			}
			n=n+3;
		}

		printf("\n nam %d la nam ==> %s %s\n",n,can,chi);
		printf("\n nhan phim bat ki de nhap lai");
	  dk=getch();
	 }
 }
