//============================================================================//
// Unit 001		: Tinh tong hai so
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	long long a,b;
	cin>>a>>b;
	if(a<b)cout<<-1;
	else
	if(a>b)cout<<1;
	else cout<<0;
	getch();
}
