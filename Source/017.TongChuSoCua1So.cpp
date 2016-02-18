//============================================================================//
// Unit 017		: Tong cac chu so cua 1 so
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
	int n,s=0;
	printf("\nnhap so n= ");scanf("%d",&n);
	while(n!=0)
	{
		s+=n%10;
		n=n/10;
	}
	printf("tong cac chu so cua n la: %d",s);
	getch(); goto lap;
}
