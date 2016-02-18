//============================================================================//
// Unit 020		: Tinh toan thoi gian
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>

main()
{
	lap:
	system("cls");
	unsigned int h1,h2,m1,m2,s1,s2,ht,mt,st,hh=0,mh=0,sh=0;
	printf("\nnhap thoi gian thu 1 gio,phut,giay: ");
	scanf("%d%d%d",&h1,&m1,&s1);
	printf("\nnhap thoi gian thu 2 gio,phut,giay: ");
	scanf("%d%d%d",&h2,&m2,&s2);
	if(h1<0||h1>12||m1<0||m1>59||s1<0||s1>59||h2<0||h2>12||m2<0||m2>59||s2<0||s2>59)
	 {
		printf("\ndu lieu sai nhap lai!");
		getch();
		goto lap;
	 }
	 st=(s1+s2)%60;
	 mt=(m1+m2);
	 ht=(h1+h2);
	 if(s1+s2>=60)mt+=1;
	 if(mt>=60) ht+=1;
	 mt=mt%60;
	 ht=ht%12;
	printf("\n tong thoi gian ban vua nhao la: %d h %d m %d s",ht,mt,st);
	if(s1>s2)
	{
		sh+=60-s1+s2;mh-=1;
	}
	else sh+=s2-s1;
	
	if(m1>m2)
	{
		mh+=m1-m2;hh-=1;
	}
	else mh+=m2-m1;
	
	if(h1>h2)hh+=h1-h2; else hh+=h2-h1;
	printf("\n hieu thoi gian ban vua nhao la: %d h %d m %d s",hh,mh,sh);
	getch(); goto lap;
}
