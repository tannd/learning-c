//============================================================================//
// Unit 031		: Uoc chung lon nhat
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

  	int a,b,la,lb;
  	printf("\n nhap hai so a,b = ");
	scanf("%d%d",&a,&b);
  	la=a;
  	lb=b;
  	while (a!=b)
   	{
   		if (a>b)a=a-b;
   		else b=b-a;
   	}
 	printf("\n UCLN la: %d",a);
 	printf("\n BCNN la: %d",(la*lb)/a);
 	getch();
}
