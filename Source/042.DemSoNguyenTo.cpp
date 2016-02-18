//============================================================================//
// Unit 042		: Dem so nguyen to trong mang
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <math.h>

void nhap(int A[100], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\nnhap phan tu thu A[%d]=",i);
		scanf("%d",&A[i]);
	}
}

int ktsnt(int n)
{
	int kt=1;
	if (n<=1) kt=0;
	else
	{
		for(int i=2;i<n;i++)
		if (n%i==0)kt=0;
	}
	return kt;
}
void main()
{

  int i,n,dem=0,A[100];
  printf("\n nhap n= ");
  scanf("%d",&n);
  nhap(A,n);
  for(i=1;i<n;i++)
  if(ktsnt(A[i])==1) dem++;
  printf("\n so so nguyen to trong day la: %d",dem);
  getch();
}
