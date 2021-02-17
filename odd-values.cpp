// Program to find odd numbers and store those to another array
#include<iostream>
using namespace std;

int main()
{
	int arr[5][5] = {{1,2,3,4,5},{2,3,4,6,4},{45,65,34,767,234},{34,5,45,565,56},{34,565,87,324,43}};
	int odd[25] = {0}, i, j, len, oddLen, odds=0;
	len = sizeof(arr)/sizeof(arr[0]);
	oddLen = sizeof(odd)/sizeof(odd[0]);
	cout<<"Showing array in the form of table: "<<endl;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			cout<<arr[i][j]<<"\t";
			if(arr[i][j] % 2 !=0){
				odd[odds] = arr[i][j];
				odds++;
			}
			
		}
		cout<<endl;
	}
	
	cout<<"Here is odd Array: [";
	for(i=0;i<oddLen;i++)
	{
		if(odd[i] != 0){
			cout<<odd[i]<<"  ";
		}
		
	}
	cout<<"]"<<endl;
	cout<<"Odds values in this array are: "<<odds<<endl;
	/*
	FEEDBACK:- Good for practice programming skills
	*/
	return 0;
}
