//============================================================================//
// Unit 015		: Doi tien
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
	int t,muoi,nam,hai,mot;
	printf("nhap so tien can doi T ="); scanf("%d",&t);
	muoi=t/10;
	t=t%10;
	nam=t/5;
	t=t%5;
	hai=t/2;
	t=t%2;
	mot=t;
	printf("\n\nso dong muoi dong la: %d ",muoi);
	printf("\n\nso dong nam dong la: %d ",nam);
	printf("\n\nso dong hai dong la: %d ",hai);
	printf("\n\nso dong mot dong la: %d ",mot);
	getch(); goto lap;
}
