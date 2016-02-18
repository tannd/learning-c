//============================================================================//
// Unit 003		: Sap xep bon so
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
	int a,b,c,d,lon,nho;
	
	printf("\nnhap ba so a,b,c,d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	lon=max(max(max(a,b),c),d);
    nho=min(min(min(a,b),c),d);
    
    printf("\n\nmax la: %d",lon);
    printf("\n\nmin la: %d",nho);
    
    if(a!=lon&&a!=nho)printf("\nso ko phai lon,nho la: %d",a);
    if(b!=lon&&b!=nho)printf("\nso ko phai lon,nho la: %d",b);
    if(c!=lon&&c!=nho)printf("\nso ko phai lon,nho la: %d",c);
    if(d!=lon&&d!=nho)printf("\nso ko phai lon,nho la: %d",d);
    
	getch();
    goto lap;
}
