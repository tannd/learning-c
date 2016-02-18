//============================================================================//
// Unit 039		: Tong luy thua
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "windows.h"
#include "math.h"
long gt(long n)
{
	long kq=1;
	if(n==1||n==0)kq=1;
	else
	for (int i=2;i<=n;i++) kq*=i;
	return kq;//tra ket qua ve ten ham
}
main()
{
	//lap:
	system("cls");
	float s,x;
	long n,i;
	printf("nhap n,x="); scanf("%d%f",&n,&x);
	int j=1;
	s=x;
	for(i=1;i<=n;i++)
	{
	  if(j==1)
	  {
			s=(float)s-pow(x,i*2+1)/gt(i*2+1);
			j=0;continue;
	  }
	  if(j==0)
	  {
            s=(float)s+pow(x,i*2+1)/gt(i*2+1);
			j=1;continue;
	  }
	}
	printf("\n tong la s= %5.3f",s);
	system("pause");//goto lap;fflush(stdin);
	
}
