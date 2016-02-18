//============================================================================//
// Unit 023		: Sap xep 3 so
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
	int a,b,c,lon,nho;
	
	printf("\nnhap ba so a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	lon=(max(max(a,b),c));
    nho=(min(min(a,b),c));
    
    printf("\n\nmax la: %d",lon);
    printf("\n\nmin la: %d",nho);
    
	getch();
	goto lap;
    
}
