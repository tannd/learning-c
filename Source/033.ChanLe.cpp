//============================================================================//
// Unit 033		: In so chan le
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
main()
{
	int n;
	printf("nhap 1 so nguyen duong N= ");
	scanf("%d",&n);
    if (n%2==0)
	    printf("%d la so chan",n);
    else
    	printf("%d la so le",n);
    getch();
	
}
