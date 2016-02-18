//============================================================================//
// Unit 010		: Tim so ngay cua thang
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "windows.h"
main()
{
	lap:
	int thang,nam;
	system("cls");
	printf("\n nhap vao thang="); scanf("%d",&thang);
	printf("\n nhap vao nam="); scanf("%d",&nam);
	switch (thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("thang do co 31 ngay"); break;
		case 4:
		case 6:
		case 9:
		case 11: printf("thang do co 30 ngay"); break;
		case 2:

			{
				if (nam%4==0&&nam%100!=0||nam%400==0)
			        printf ("thang do co 29 ngay");
				else printf("thang do co 28 ngay");
				break;
			}
	  }
	getch(); goto lap;
  }



