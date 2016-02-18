//============================================================================//
// Unit 028		: Luy thua x^y
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "math.h"
#include "windows.h"
main()
{
	system("cls");
	double x,y,z;
	printf("\n nhap x va y");
	scanf("%lf%lf",&x,&y );
	z=pow(x,y);
	printf("\n gia tri z=%0.10lf",z);
	system("pause");
}
