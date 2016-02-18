//============================================================================//
// Unit 012		: Tinh theo cong thuc
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
main()
{
	lap:
	system("cls");
	float x,y1,y2;
	printf("\nnhap x= "); scanf("%f",&x);
	y1=4*(x*x+10*x*sqrt(x)*3*x+1);
	y2=((pow(sin(M_PI*x),2))+sqrt(x*x+1))/(exp(1)+cos((M_PI/4)-x));
	printf("\n\nket qua y1= %8.3f",y1);
	printf("\n\nket qua y2= %8.3f",y2);
	getch();
	goto lap;
}
