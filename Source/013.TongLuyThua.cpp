//============================================================================//
// Unit 013		: Tong luy thua
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
	int n,i;
	float s=0,x;
	printf("\nnhap n= "); scanf("%d",&n);
	printf("\nnhap x= "); scanf("%f",&x);
	
	for(i=1;i<=n;i++)
	{
		s=s+float (pow(x,i))/(i*(i+1));
	}
	printf("\n tong la s= %.3f",s);
	getch();
	goto lap;
}
