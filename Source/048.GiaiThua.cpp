//============================================================================//
// Unit 048		: Giai thua
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
main()
{
	int s=0,i,n;
	printf("\n nhap n=");
	scanf("%d",&n);
	long gt=1;
	for(i=1;i<=n;i++)
	{
		gt=gt*i;
		s=s+gt;
	}
	printf("tong la s= %d",s);
	getch();
}
