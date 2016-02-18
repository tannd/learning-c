//============================================================================//
// Unit 002		: Ngay hom qua
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "windows.h"
#include "math.h"
int ktnhuan(int n);
int ktvao(int ngay,int t,int nam);
main()
{
	lap:
	int ngay,thang,nam;
	system("cls");
	printf("\n nhap vao ngay="); scanf("%d",&ngay);
	printf("\n nhap vao thang="); scanf("%d",&thang);
	printf("\n nhap vao nam="); scanf("%d",&nam);
	if (ktvao(ngay,thang,nam)==1)
		{
			 printf("vui long nhap lai!");
			 getch(); goto lap;
		}
	 switch(thang)
	  {
		 case 1:
		 case 2:
		 case 5:
		 case 7:
		 case 8:
		 case 10:
		 case 12:
			 {
				if (ngay==1)
					{
					    ngay=30;
					  	if (thang==1)
					  		{
						 		thang=12;
						 		ngay=31;
								nam--;
					  		}
						else
				       		if(thang==8||thang==2||thang==1)
					   			{
									ngay=31;
									thang--;
					   			}
					   		else thang--;
				  	}
				else ngay--;

			}; break;

		 case 4:
		 case 6:
		 case 9:
		 case 11:
			 {
				  if (ngay==1)
					{
						ngay=31;
						thang--;
					}
				  else ngay--;
			 }; break;
		 case 3:

			{
				  if (nam%4==0&&nam%100!=0||nam%400==0)
				  		{

							if (ngay==1)
								  {
									 ngay=29;
									 thang--;break;
								  }
				  		}
				  else
				  		{

                    		if (ngay==1)
								{
									ngay=28;
									thang--;
									break;
								}
						}
				 if(ngay!=1)
				 {
						ngay--;
						break;
				 }
				  
			};break;
	}
    printf("\nngay hom  qua la:\n\n%d-%d-%d",ngay,thang,nam);
    getch(); goto lap;
}
 int ktvao(int ngay,int t,int nam)
{
	int kq;
	if(ngay<=0||t<=0||nam<0||(ngay>31||t>12||(t==2&&ngay>=29&&ktnhuan(nam)==0)||
	(t==2&&ngay>29)|| (t==4&&ngay>30)||(t==6&&ngay>30)||(t==9&&ngay>30)))
	kq=1;
	else kq=0;
	return kq;
}
int ktnhuan(int n)
{
 int kq;
 if(n%4==0&&n%100!=0||n%400==0)
  kq=1;
  else kq=0;
  return kq;
}
