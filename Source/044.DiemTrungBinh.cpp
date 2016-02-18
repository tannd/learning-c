//============================================================================//
// Unit 044		: Diem trung binh
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <conio.h>
#include <string.h>// thu vien cho chuoi
/******************************************************************************/
struct hocsinh// khai bao kieu du lieu hocsinh
{
	char name[50],que[50];
	int day,month,year;
	float toan, ly, hoa,tb;
};

main() // hoac void main();
{
	hocsinh HS[100];
	int n;
	int i,j;
	printf("\nnhap so hoc sinh trong lop n= ");
	scanf("%d",&n);
	
//nhap du lieu
	for(i=0;i<n;i++)
	{
		printf("\nnhap ten cua hoc sinh thu => %d :",i);
		fflush(stdin);//xoa b? dem ban phim
		gets(HS[i].name);// doc ten cua hoc sinh
		printf("\nnhap que cua hoc sinh => %s :",HS[i].name);
		fflush(stdin);
		gets(HS[i].que);
		printf("\nnhap ngay thang nam sinh cua hoc sinh => %s :",HS[i].name);
		scanf("%d%d%d",&HS[i].day,&HS[i].month,&HS[i].year);
		printf("\nnhap diem toan cua hoc sinh => %s :",HS[i].name); scanf("%f",&HS[i].toan);
		printf("\nnhap diem ly cua hoc sinh => %s :",HS[i].name); scanf("%f",&HS[i].ly);
		printf("\nnhap diem hoa cua hoc sinh => %s :",HS[i].name); scanf("%f",&HS[i].hoa);
	}
	
// tinh diem trung binh
	for(i=0;i<n;i++)
	{
		HS[i].tb = (float)(HS[i].toan + HS[i].ly + HS[i].hoa)/3;//tinh diem trung binh
	}
	
// sap xep khong khong dung chuong trinh con
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
    if(HS[i].tb>HS[j].tb)
    {
		hocsinh temp;
		strcpy(temp.name,HS[i].name);
		strcpy(temp.que,HS[i].que);
		temp.day = HS[i].day;
		temp.month = HS[i].month;
		temp.year = HS[i].year;
		temp.toan = HS[i].toan;
		temp.ly = HS[i].ly;
		temp.hoa = HS[i].hoa;
		
		
		strcpy(HS[i].name,HS[j].name);
		strcpy(HS[i].que,HS[j].que);
		HS[i].day= HS[j].day;
		HS[i].month= HS[j].month;
		HS[i].year= HS[j].year;
		HS[i].toan= HS[j].toan;
		HS[i].ly= HS[j].ly;
		HS[i].hoa= HS[j].hoa;
		
		
		strcpy(HS[j].name,temp.name);
		strcpy(HS[j].que,temp.que);
		HS[j].day=temp.day;
		HS[j].month=temp.month;
		HS[j].year=temp.year;
		HS[j].toan=temp.toan;
		HS[j].ly=temp.ly;
		HS[j].hoa=temp.hoa;
    }
    
// in ra man hinh

	printf("\nSTT\tName\tHometown\tbirth\tToan\tLy\tHoa\tTB");
	for(i=0;i<n;i++)
	{
		printf("\n%d ",i);
		printf("%s ",HS[i].name);
		printf("%s\t",HS[i].que);
		printf("%d-%d-%d ",HS[i].day,HS[i].month,HS[i].year);
		printf("%2.2f\t",HS[i].toan);
		printf("%2.2f\t",HS[i].ly);
		printf("%2.2f\t",HS[i].hoa);
		printf("%2.2f ",HS[i].tb);
	}
	
	getch();
}
