#include<iostream>
using namespace std;

//Main function starts here
int main()
{
	int sum=0, i=0;
	
	int n=1000; // this value will change the program out
	
	// doing computation for the odd integer sum
	do{
		if(i%2!=0)
		{
			sum=sum+i;	
		}
		i++;
	} while(i<=n);	
	
	// printing total sum
	cout<<"Total sum is: "<<sum<<endl;
	return 0;
}
