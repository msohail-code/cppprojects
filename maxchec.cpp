#include<iostream>
using namespace std;

//Main function starts here
int main()
{
	int n1,n2,n3,max;
	cout<<"Enter 3 numbers: ";
	// Taking inputs
	cin>>n1;
	cin>>n2;
	cin>>n3;
	
	//comparing and assigning max
	if(n1>n2)
	{
		max = n1;
	}
	else if(n2>n3)
	{
		max=n2;
	} 
	else if(n3>n1)
	{
		max=n3;
	}
	
	cout<<"Maximum number is: "<<max;
	
	return 0;
}
