//============================================================================//
// Unit 011		: Tong vi tri chan
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
int tongvitrichan(int A[30],int n)
{
	int s=0;
	for(int j=0;j<n;j++)
	if(j%2==0)s+=A[j];
	return s;
}
main()
{
	lap:
	int n,A[30];
	system("cls");
	nhap(A,n);
	printf("\ntong la s= %d",tongvitrichan(A,n));
	getch(); goto lap;

}
