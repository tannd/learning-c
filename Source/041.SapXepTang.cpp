//============================================================================//
// Unit 041		: Sap xep mang tang dan
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
void nhap(int A[100], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\nnhap phan tu thu A[%d]=",i);
		scanf("%d",&A[i]);
	}
}
main()

{
	int n,A[100],i,j;
	printf("\nnhap so phan tu cua day n= ");
	scanf("%d",&n);
	nhap(A,n);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
    if(A[i]>A[j])
    {
		int tg;
		tg=A[i];
		A[i]=A[j];
		A[j]=tg;
    }
    
    for(i=0;i<n;i++)
    printf(" %d ",A[i]);
    getch();
}
