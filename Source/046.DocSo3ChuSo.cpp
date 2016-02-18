//============================================================================//
// Unit 046		: Doc so co 3 chu so
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
void doc(int n)
{
	switch (n)
    {
	case 0:printf("khong");break;
	case 1:printf("mot");break;
	case 2:printf("hai");break;
	case 3:printf("ba");break;
	case 4:printf("bon");break;
	case 5:printf("nam");break;
	case 6:printf("sau");break;
	case 7:printf("bay");break;
	case 8:printf("tam");break;
	case 9:printf("chin");break;
    }
}
 main()
{
	int n,tr,ch,dv;
	printf("\nnhap 1 so gom 3 chu so N= ");
	scanf("%d",&n);
	dv=n%10; //lay hang don vi
	n=n/10;
	ch=n%10;// lay hang chuc
	n=n/10;
	tr=n%10;// lau hang tram
	
	if(tr==0&&ch==0&&dv==0) doc(dv);//0
	
    if(tr==0&&ch==0&&dv!=0) doc(dv);//1-9

    if(tr==0&&ch==1&&dv==0) printf(" muoi ");//10

    if(tr==0&&ch==1&&dv!=0) {printf(" muoi "); doc(dv);}//11-19

	if(tr==0&&ch>1&&dv==0){doc(ch);printf(" muoi");}//x0
	
	if(tr==0&&ch>1&&dv!=0){doc(ch);printf (" muoi ");doc(dv);}//xx/x0
		
	if(tr!=0&&ch==0&&dv==0){doc(tr); printf(" tram");}//x00
	
	if(tr!=0&&ch==0&&dv!=0){doc(tr); printf(" le "); doc(dv);}//x0x
	
	if(tr!=0&&ch==1&&dv!=0){doc(tr);printf(" tram ");printf(" muoi "); doc(dv);}//x1x
	
	if(tr!=0&&ch>1&&dv==0){doc(tr);printf(" tram ");doc(ch); printf(" muoi");}//xx0
	
	if(tr!=0&&ch>1&&dv!=0){doc(tr);printf(" tram ");doc(ch);printf(" muoi "); doc(dv);}//xxx
	
	getch();
}
