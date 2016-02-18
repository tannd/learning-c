//============================================================================//
// Unit 027		: Sap xep hoc sinh
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <string.h>
main()
{
	lap:
	system("cls");
	struct hocsinh
	{
		char hoten[30],xl[10];
		float toan,ly,hoa,dtb;
	} hs[100];
	int n;
	char ch[30];
	printf("\nnhap so hoc sinh cua lop n= ");scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nnhap ten hoc sinh thu %d:",i);
		fflush(stdin);
		gets(ch);
		if(strcmp(ch,"")!=0)
		{
		  strcpy(hs[i].hoten,ch);
		  printf("\nnhap diem ba mon cua hoc sinh thu %d: ",i);
		  scanf("%f%f%f",&hs[i].toan,&hs[i].ly,&hs[i].hoa);
		}
		
	}
	for(int i=0;i<n;i++)
	{
		hs[i].dtb=(hs[i].toan+hs[i].ly+hs[i].hoa)/3;
		if(hs[i].dtb>=9)strcpy(hs[i].xl,"xuat sac");
		else
		 if(hs[i].dtb<9&&hs[i].dtb>=8)strcpy(hs[i].xl,"gio");
		 else
		  if(hs[i].dtb<8&&hs[i].dtb>=6.5)strcpy(hs[i].xl,"kha");
		  else
		   if(hs[i].dtb<6.5&&hs[i].dtb>=5)strcpy(hs[i].xl,"trung binh");
		   else
		    if(hs[i].dtb<5&&hs[i].dtb>=3)strcpy(hs[i].xl,"yeu");
		    else
		     if(hs[i].dtb<3.5)strcpy(hs[i].xl,"kem");
	}
	printf("\n\ndang sach xep loai cua lop la:");
	for(int i=0;i<n;i++)
	{
		printf("\n\n================*******========================");
		printf("\nthong tin hoc sinh thu %d",i);
		printf("\nten hoc sinh la: "); puts(hs[i].hoten);
		printf("\ndiem toan la: %.3f",hs[i].toan);
		printf("\ndiem ly la: %.3f",hs[i].ly);
		printf("\ndiem hoa la: %.3f",hs[i].hoa);
		printf("\ndiem trung binh la: %.3f",hs[i].dtb);
		printf("\nxep loai la: "); puts(hs[i].xl);
	}
	getch();
	goto lap;
}
