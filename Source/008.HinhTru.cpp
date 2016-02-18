//============================================================================//
// Unit 008		: Hinh tru
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
	float Sd,Sx,r,v,h;
	printf("nhap r,h"); scanf("%f%f",r,h);
	Sd=M_PI*r*r;
	Sx=2*M_PI*r*h;
	v=Sd*h;
	printf("dien tich day la Sd= %3f",Sd);
	printf("dien tich xung quanh la Sxq= %3f",Sx);
	printf("the tich la V= %3f",v);
	getch(); goto lap;
}
