//============================================================================//
// Unit 029		: Boi chung nho nhat cua 2 so
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include<stdio.h>
#include<conio.h>
#include<math.h>

int BCNN(int a, int b)
{
    int a,b,la,lb,kq;
    la=a;
  	lb=b;
  	while (a!=b)
   	{
   		if (a>b)a=a-b;
   		else b=b-a;
   	}
   kq=(la*lb)/a;
   return kq;
}

void main()
{

  	int a,b;
  	printf("\n nhap hai so a,b = ");
	scanf("%d%d",&a,&b);
 
 	printf("\n BCNN la: %d",BCNN(a,b));
 	getch();
}
