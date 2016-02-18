//============================================================================//
// Unit 016		: Xoa so lon nhat trong mang
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
void xoamax(int A[100],int n)
{
	int max=A[0],dem=0,i,j;
	for(i=1;i<n;i++)
	if (max<A[i])max=A[i];
	for(i=0;i<n;i++)
	{
		if(max==A[i])
		{
			for(j=i;j<n;j++)A[j]=A[j+1];
			n=n-1;
			i--;
		}
	}
	if (n==0)
	printf("mang bi xoa het!");
	else
	for(i=0;i<n-dem;i++) printf("\n%d",A[i]);
}
main()
{
	lap:
	int A[100],n;
	system("cls");
	nhap(A,n);
	xoamax(A,n);
	
	getch();goto lap;
}
