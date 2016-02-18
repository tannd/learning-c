//============================================================================//
// Unit 014		: Sap xep mang
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void nhap(int A[100],int &n)
{
    printf("\nnhap so phan tu cua mang n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu thu A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
void dao(int *x,int *y)
{
	int tg;
	tg=*x;
	*x=*y;
	*y=tg;
}
void sxle(int A[100],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
 	for(int j=i;j<n;j++)
 	if(A[j]%2!=0&&A[i]>A[j]&&A[i]%2!=0)
	dao(&A[i],&A[j]);
}
main()
{
	lap:
	int A[100],n,i,vt;
	system("cls");
	nhap(A,n);
	sxle(A,n);
 	for(i=0;i<n;i++)
 	printf("\n%d",A[i]);
	getch();goto lap;
}
