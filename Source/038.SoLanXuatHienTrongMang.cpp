//============================================================================//
// Unit 038		: So lan xuat hien trong mang
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int n,x,dem,i,A[100];
void nhap(int A[100],int n)
  {
    for (i=0;i<n;i++)
      {

		printf("\n nhap phan tu thu A[%d]",i);
		scanf("%d",&A[i]);
      }
  }
int sosanh(int a,int b)
   {
	 if (a==b) return 1;
	 else return 0;
  }
void kt_va_in(int A[100],int n)
{
	for (i=0;i<n;i++)
	if(sosanh(A[i],x)==1)
   {
		dem++;
		printf("vi tri trung thu A[%d]\n",i);
   }
   printf(" so lan trung nhau la: %d",dem);
}
main()
{
	lap:
	system("cls");
	printf("\n nhap n= "); scanf("%d",&n);
	printf("\n nhap x= "); scanf("%d",&x);
	nhap(A,n);
	kt_va_in(A,n);
	getch(); goto lap;
}
