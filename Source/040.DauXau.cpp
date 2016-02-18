//============================================================================//
// Unit 040		: Dao xau
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "windows.h"
#include "ctype.h"
#include "stdlib.h"
#include "math.h"
int ktdoixung(long n)  //kiem tra xau co doi xung hay khong
{
  char s[15],tg[15],ss[15];
  itoa(n,s,10);
  strcpy(ss,s);
  strrev(s);
  if (strcmp(s,ss)==0) return 1;      // so sanh xau truoc va sau khi dao
  return 0;
}
int ktchinhphuong(long n)
{
	long k=sqrt(n);
	if (k*k==n)return 1;
	else return 0;
}
int ktsonguyento(long n)
{
  if (n==1||n==0)return 0;
  for (int i=2;i<n;i++)
        if (n%i==0)
           {
		     return 0;
		     break;
           }
   return 1;
}
int slonnhat(long n)
{
	int A[20],dem=0;
	while(n!=0)
	   {
			A[dem]=n%10;
			dem++;
			n=n/10;
	   }
	int max=A[0];
	for (int i=1;i<dem;i++)
	   if(max<A[i]) max=A[i];
	return max;
}
int snhonhat(long n)
{
    int A[20],dem=0;
	while(n!=0)
	   {
			A[dem]=n%10;
			dem++;
			n=n/10;
	   }
	 int min=A[0];
	 for (int i=1;i<dem;i++)
	   if(min>A[i]) min=A[i];
	return min;
}
int kttang(long n)
{

	int A[20],dem=0,kt=1;
	while(n!=0)
	     {
			A[dem]=n%10;
			dem++;
			n=n/10;
	     }
     for (int i=dem-1;i>0;i--)
	 if (A[i]>A[i-1])
	 {
			kt=0;
			break;
	 }
	 return kt;
}
int ktgiam(long n)
{
    int A[20],dem=0,kt=1;
	while(n!=0)
	     {
			A[dem]=n%10;
			dem++;
			n=n/10;
	     }
	for (int i=dem-1;i>0;i--)
	 if (A[i]<A[i-1])
	 {
			kt=0;
			break;
	 }
	 return kt;
}
int kttanggiam(long n)
{
	int kt=0;
	if (ktgiam(n)==1)kt=1;
	if (kttang(n)==1)kt=2;
	return kt;
}
main()
{
	lap:
	long n;
	char s[15],tg[15];
		system("cls");
		printf("\nnhap so nguyen n= "); scanf("%d",&n);
		if (n<=0) goto lap;
		if (ktdoixung(n)==1) printf("\n==>so vua nhap la so doi xung!\n");
		    else printf("\n==>so vua nhap khong phai so doi xung!\n");
		if (ktchinhphuong(n)==1)printf("\n==>so vua nhap la so chinh phuong!\n");
		   else printf("\n==>so vua nhap khong phai so chinh phuong!\n");
		if (ktsonguyento(n)==1) printf("\n==>so vua nhap la so ngyen to!\n");
		   else printf("\n==>so vua nhap khong phai la so nguyen to!\n");
		printf("\nchu so lon nhat la max= %d\n chu so nho nhat la min= %d\n",slonnhat(n),snhonhat(n));
       
       switch(kttanggiam(n))
       {
		    case 0:
				{
				   printf("\nko tang,ko giam\n");break;
		        }
			case 1:
                {
                    printf("\ngiam\n");break;
                }
			case 2:
                {
                    printf("\ntang\n");break;
                }
	   }
		system("pause"); goto lap;fflush(stdin);
	
}
