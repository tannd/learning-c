//============================================================================//
// Unit 019		: Chen so lon nhat
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void nhap(int A[100],int &n,int &x)
{
    printf("\nnhap so phan tu cua mang n= ");
	scanf("%d",&n);
	printf("\nnhap so x= ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu thu A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
void chenmax(int A[100],int n,int x)
{
	int max=A[0],dem=0,i,j;
	for(i=1;i<n;i++)
	if (max<A[i])max=A[i];
	for(i=0;i<n;i++)
	{
		if(max==A[i])
		{

			for(j=n-1;j>i+1;j--)A[j+1]=A[j];
			A[i+1]=x;
		}
	}
	
	for(i=0;i<=n;i++) printf("\n%d",A[i]);
}
main()
{
	lap:
	int A[100],n,x;
	system("cls");
	nhap(A,n,x);
	chenmax(A,n,x);

	getch();goto lap;
}
