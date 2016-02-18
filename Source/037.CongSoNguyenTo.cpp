//============================================================================//
// Unit 037		: Cong so nguyen to
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	lap:
		system("cls");
		int n,i,k,kt=1,s=0,a[30];
		printf("nhap n=");scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("nhap a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		  {
				for(k=2;k<a[i];k++)
		        if(a[i]%k==0)kt=0;
		        if(kt==1) s=s+a[i];

		  }
		printf("tong bang %d",s);
	    getch();
		goto lap;
}
