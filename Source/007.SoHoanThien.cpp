//============================================================================//
// Unit 007		: So hoan thien
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
int kthoanthien(int k)
{
  int i,s=0;
  for(i=0;i<k;i++)
  s+=i;
  if(s==k)return 1;
  else return 0;
}
main()
{
	lap:
	int n;
	system("cls");
	printf("\nnhap n= "); scanf("%d",&n);
	for(int i=0;i<n;i++)
	if(kthoanthien(i)==1)printf("\n %d",i);
	getch();
	goto lap;
}
