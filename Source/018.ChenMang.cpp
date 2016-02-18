//============================================================================//
// Unit 018		: Chen mang
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
void chendau(int A[100],int n,int x)
{
	int i;
    for(int i=n;i>0;i--)
	A[i]=A[i-1];
	A[0]=x;
}
main()
{
	lap:
	int A[100],n,x;
	system("cls");
	nhap(A,n,x);
	chendau(A,n,x);
	for(int i=0;i<=n;i++)
	printf("\n%d",A[i]);
	getch();goto lap;
}
