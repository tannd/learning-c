//============================================================================//
// Unit 036		: Cong ma tran vuong
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>

void nhap(int A[100][100], int n)
{
	int i,j;
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	{
		printf("\nnhap phan tu thu A[%d][%d]=",i,j);
		scanf("%d",&A[i][j]);
	}
}

void main()
{
    int n,A[100][100],i,j,s=0;
    
    printf("\nnhap kich thuoc cua ma tran n= ");
	scanf("%d",&n);
	nhap(A,n);
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	s+=A[i][j];
	printf("\n tong ma tran la: %d",s);
	getch();
}
