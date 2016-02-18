//============================================================================//
// Unit 021		: So nguyen to
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
using namespace std;
int a[1000],b[1000];
int m=0,n;
// ham phat sinh so ngau nhien
void PhatSinhGTNgauNhien()
{ 
  int max = 1000; 
  	cout <<"\nn = ";
  	cin >> n;
  	for (int i=0;i<n;i++)
  	a[i] = rand()%max+1;
   cout<<"mang phat sinh la:"<<endl;
	for (int i=0;i<n;i++)
	cout<<"  "<<a[i];
	cout<<endl;
} 
//kiem tra so nguyen to
int nguyento(int k)

{
	  int kt=1,i;
	  if(k<=1) kt=0;
       else
	   {
          for(i=2;i<=sqrt(k);i++)
	      if (k%i==0)kt=0;
	   }
	return kt;
}
// sao chep so khong phai nguyen to sang mang b
void SapChepNT(int a[1000],int n, int b[1000],int m)
{
	int j=0,i;
	for (i=0;i<n;i++)
		if (nguyento(a[i])==0)
		{
            m=m+1;
			b[j]=a[i];
			j++;
		}
	cout<<"mang b la: "<<endl;
    for(j=0;j<m;j++)
       cout<<"  "<<b[j];
       cout<<endl;
}
//ham hoan vi
void hoanvi(int *x,int *y)
{
	int tg;
	tg=*x;
	*x=*y;
	*y=tg;
}
// sap giam so trong mang b
void SapGiam(int b[1000], int &m)
{
	int i,j;
	for (i=0;i<m-1;i++)
	for (j=i+1;j<m;j++)
		if (b[i]>b[j])
			hoanvi(&b[i],&b[j]);
  cout<<"mang b sap xep: "<<endl;
    for(i=0;i<m;i++)
       cout<<"  "<<b[i];
       cout<<endl;
}
// ham xoa so nguyen to trong mang a
void DeleteNguyenTo(int a[1000], int n)
{
	for(int i=0;i<n;i++)
	if(nguyento(a[i])==1)
	{
		for(int j=i;j<n;j++)
		a[j]=a[j+1];
		n--;
	}
	cout<<"mang a la:"<<endl;
	
    for(int i=0;i<n;i++) cout<<"  "<<a[i];
}
main()
{
	PhatSinhGTNgauNhien();
	SapChepNT(a,n,b,m);
	SapGiam(b,m);
	DeleteNguyenTo(a,n);
	getch();
	
}

