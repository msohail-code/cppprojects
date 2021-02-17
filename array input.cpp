#include <iostream>
using namespace std;

int main()
{
	int arr[5], odd=0, even=0;
	cout<<sizeof(arr)<<endl;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<len; i++)
	{
		//system("cls");
		cout<<"Enter "<< (i+1) <<" value: ";
		cin>>arr[i];
	}
	
	for(int j=0; j<len; j++)
	{
		
		if(arr[j]%2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		
		
	}
	
	cout<<"Total even: "<<even<<endl;
	cout<<"Total odd: "<<odd<<endl;
	return 0;
}
