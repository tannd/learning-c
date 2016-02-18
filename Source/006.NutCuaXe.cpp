//============================================================================//
// Unit 006		: Nut cua xe
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "windows.h"
main ()
{
   lap:
   int n; // 1288
   system("cls");
	printf("\n nhap bien so xe n= ");
	scanf("%d",&n);
	if(n>9999)
	{
	 printf("\n vui long nhap lai!");
	 getch();
	 goto lap;
	}
	int s1,s2,s3;
	s1 = n/1000; // lay so thu nhat ==> s1 = 1
	n = n%1000; // lay so phan du thu n = 288
	s2 = n/100; // lay so thu hai ==> s2 = 2
	n = n%100; // lay so phan du thu n = 88
	s3 = n/10; // lay so thu ba ==> s3 = 8
	n = n%10; // lay so thu bon ==> s4 = 8
	int s;
	s = s1 + s2 + s3 + n; // cong tong
	s = s% 10; // chia cho 10 lay phan du
	printf(" nut xe cua ban la: %d",s);
    printf("\n nhan phim bat ky de nhap tiep!");
    getch(); goto lap;
}
