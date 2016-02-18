//============================================================================//
// Unit 009		: Tim so lon thu hai
// Author 		: Nguyen.Duy.Tan
// Date		 	: 18/11/2011 (dd/mm/yyyy)
//============================================================================//
#include <iostream>
using namespace std;
main()
{
	int A[10000000];
	int dem,max,n,i;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>A[i];
	
	max=A[0];
	
	for(i=1;i<n;i++)
	if(max<A[i])max=A[i];

	int max2=A[0];
	
	for(i=0;i<n;i++)
	if(A[i]!=max&&max2<A[i]) max2=A[i];
		
	for(i=0;i<n;i++) if(max2==A[i])dem++;
	
	cout<<dem;
	
}
