//============================================================================//
// Unit 003		: Doi sang chua hoa
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
main()
{
	lap:
	system("cls");
	char c;
	printf("\nnhap mot chu cai c= ");
	fflush(stdin);
	scanf("%c",&c);
	if(islower(c)) c=toupper(c);
	else c=tolower(c);
	printf("ky tu da xu ly la: %c",c);
	getch();goto lap;
}
