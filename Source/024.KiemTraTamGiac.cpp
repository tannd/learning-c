//============================================================================//
// Unit 024		: Kiem tra tam giac
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
int kttamgiac(int a,int b,int c)
{
	int kt=0;
	if(a+b>c&&b+c>a&&c+a>b)kt=1;
	return kt;
}
int ktcan(int a,int b,int c)
{
	int kt=0;
	if(a==b||b==c||c==a&&kttamgiac(a,b,c)==1)kt=1;
	return kt;
}
int ktvuong(int a,int b,int c)
{
	int kt=0;
	if(a*a==b*b+c*c||a*a+b*b==c*c||a*a+c*c==b*b&&kttamgiac(a,b,c)==1)kt=1;
	return kt;
}
int ktdeu(int a,int b,int c)
{
  int kt=0;
  if(a==b&&b==c&&a==b&&kttamgiac(a,b,c)==1)kt=1;
  return kt;
}
int ktvuongcan(int a,int b,int c)
{
	int kt=0;
	if(ktvuong(a,b,c)==1&&ktcan(a,b,c)==1)kt=1;
	return kt;
}
main()
{
	lap:
	system("cls");
	int a,b,c;
	
	printf("\nnhap ba canh cua tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(kttamgiac(a,b,c)==1)
	{
		printf("\n3 so nhap vao la ba canh cua tam giac!\n");
		if(ktdeu(a,b,c)==1) printf("\nla tam giac deu!");
		else
	  		if(ktcan(a,b,c)==1) printf("\nla tam giac can!");
	   		else
	   			if(ktvuong(a,b,c)==1) printf("\nla tam giac vuong!");
				else
	     			if(ktvuongcan(a,b,c)==1)  printf("\n la tam giac vuong can!");
		  			else printf("\nla tam giac thuong!");
	}
	else printf("\nba so khong phai la ba canh cua tam giac!");
	getch(); goto lap;
}
