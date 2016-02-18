//============================================================================//
// Unit 026		: Tinh tien taxi
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	lap:
	system("cls");
	int n;
	unsigned long t=0;
	printf("\nnhap so km di n= "); scanf("%d",&n);
    for(int i=1;i<=n;i++)
     {
		if(i==1)t=t+15000;
		if(i>1&&i<=5) t=t+13500;
		if(i>=6) t=t+11000;
     }
	if(n>=120)t=t*0.9;
	printf("\nso tien la: %.3f",float(t));
	getch();
	goto lap;
}
