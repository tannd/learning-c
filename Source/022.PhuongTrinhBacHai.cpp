//============================================================================//
// Unit 022		: Phuong trinh bac 2
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

main()
{
	lap:
	system("cls");
    float a,b,c;
	printf("nhap 3 he so cua phuong trinh: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0)
	 {
        float delta=b*b-4*a*c;
        if(delta<0)printf("pt vo nghiem!");
        else
        	{
	   			if(delta==0)printf("\nnghiem cua pt la: %.2f",(-b/2*a));
	  			else
	  				{
						float x1,x2;
						x1=(-b+sqrt(delta))/(2*a);
						x2=(-b-sqrt(delta))/(2*a);
            			printf("\nnghiem thu 1 cua pt la: %.2f",x1);
            			printf("\nnghiem thu 2 cua pt la: %.2f",x2);
	  				}
			}
		
	 }
	else//truong hop pt bac nhat nen co vao vi no mang tu tuong tu duy day du
	 {
	    
		if(b==0)
		  {
				if(c==0)printf("\n phuong trinh co vo so nghiem!");
				else printf("\n pt vo nghiem!");
		  }
		else printf("\nnghiem cua pt la: %8.3f",-c/b);
      }
	getch(); goto lap;
}
