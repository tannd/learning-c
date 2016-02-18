//============================================================================//
// Unit 034		: Chu chuyen dong
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "windows.h"
#include "time.h"
void gotoxy(short x,short y)
{
  HANDLE hConsoleOutput;
  COORD Cursor_an_Pos = { x,y};
  hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}
main()
{
	char s[255]="kim hai";
	while(1)
	{
		for(int i=0;i<=80-strlen(s);i++)
		{
          system("cls");
		  gotoxy(i,12);
		  puts(s);
		  Sleep(100);
	    }
	    int vt=0;
	    for(int i=4;i<=25-strlen(s);i++)
		{
          //system("cls");
		  gotoxy(40,i);
	      printf("%c\n",s[vt]);
	      vt++;
		  Sleep(100);
	    }
	    vt=0;
	    for(int i=0;i<=strlen(s);i++)
		{
		  gotoxy(i,10);
		  printf("%c",s[vt]); putchar(7);
		  vt++;
		  Sleep(100);
	    }
	    int j=0;
	    for(int i=0;i<strlen(s);i++)
		{
          system("cls");
          j+=3;
		  gotoxy(i,j);
		  puts(s);
		  vt++;
		  Sleep(100);
	    }
	}
}
