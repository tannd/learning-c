//============================================================================//
// Unit 047		: Day fibonaci
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
main()
  {
    lap:
    system ("cls");
	long An=1,An1=1,An2=1;
	int n;
	printf("\n nhap n= "); scanf("%d",&n);
	for(int i=3;i<=n;i++)
	{
	  An2=An1;
	  An1=An;
	  An=An1+An2;
	}
	printf("\n so la: %d",An);
	getch();
	goto lap;
  }
