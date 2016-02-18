//============================================================================//
// Unit 005		: Print time fomat
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
	int h,m,s;
	printf("\nnhap theo thu tu gio,phut,giay: ");
	scanf("%d%d%d",&h,&m,&s);
	if(h<0||h>12||m<0||m>59||s<0||s>59)
	{
		printf("\ndu lieu sai nhap lai!");
		getch();
		goto lap;
	}
	printf("\nthoi gian ban vua nhap la: %d h %d m %d s",h,m,s);
	getch(); goto lap;
}
