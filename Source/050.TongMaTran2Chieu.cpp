//============================================================================//
// Unit 050		: Tong ma tran 2 chieu
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
void nhap(int A[100][100], int m,int n)
{
	int i,j;
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	{
		printf("\nnhap phan tu thu [%d][%d]=",i,j);
		scanf("%d",&A[i][j]);
	}
}

 void main()
{
    int m,n;
    int A[100][100],B[100][100];
    int i,j;

    printf("\nnhap kich thuoc cua 2 ma tran MxN = ");
	scanf("%d%d",&m,&n);
	
	printf("\nnhap ma tran A");
	nhap(A,m,n);
	
	printf("\nnhap ma tran B");
	nhap(B,m,n);
	
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	A[i][j]+=B[i][j];
	
	printf("\nma tran da cong la:\n");
	for (i=0;i<m;i++)
	{
		printf("\n");
		for (j=0;j<n;j++) printf(" %d ",A[i][j]);
	}
	getch();
}
