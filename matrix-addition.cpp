// program to add 2 matrix
#include<iostream>
using namespace std;

int main()
{
	int a[3][3] = {{2,3,8},{5,8,3},{2,6,3}};
	int b[3][3] = {{2,3,1},{6,1,2},{6,2,1}};
	int i,j;
	int aLen = sizeof(a)/sizeof(a[0]), bLen = sizeof(a)/sizeof(a[0]);
	cout<<"Printing Matrix A:"<<endl;
	for(i=0;i<aLen;i++)
	{
		for(j=0;j<aLen;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<"Printing Matrix B:"<<endl;
	for(i=0;i<bLen;i++)
	{
		for(j=0;j<bLen;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<"Addition Matrix A + B:"<<endl;
	for(i=0;i<bLen;i++)
	{
		for(j=0;j<bLen;j++)
		{
			cout<<(a[i][j]+ b[i][j])<<"\t";
		}
		cout<<endl;
	}
	/*
	FEEDBACK:- This is a good program though. We need to do litle more work on this. This just adds any kind of sqaure matrix only and it complete dynamic 
	*/
	return 0;
}
