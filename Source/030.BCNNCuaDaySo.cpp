//============================================================================//
// Unit 030		: Boi chung nho nhat cua day so
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include<stdio.h>
#include<conio.h>
#include<math.h>

int BCNN(int a, int b)
{
    int la,lb,kq;
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

main()
{

  	int i,bc,n;
  	int A[100];
  	printf("\n nhap so phan tu cua mang = ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\n nhap phan tu thu %d = ",i);
		scanf("%d",&A[i]);
	}
	bc=BCNN(A[0],A[1]);
    for (i=3;i<n;i++) bc=BCNN(bc,A[i]);
    
    printf("\nboi chung cua day la = %d",bc);
 	getch();
}
