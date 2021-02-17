#include<iostream>
#include<string>
#include<sstream> 
using namespace std;

//our main function

int main()
{
	// declaring variables
	int arr[2][2], max, min, i, j, len;
	string min_index, max_index, i_val, j_val;
	
	
	//our main work is here;
	stringstream ii;
	stringstream jj;
	
	len = sizeof(arr)/sizeof(arr[1]);
	
	cout<<len;
	// initializing array
	
	for(i=0; i<len; i++)
	{
		cout<<"Enter the row: "<< i+1 <<endl;
		for(j=0;j<len;j++)
		{
			cout<<"Enter the value "<<j+1<<": ";
			cin>>arr[i][j];
		}
		
		cout<<endl;
	}
	
	//finding the max and min
	
	min = arr[0][0];
	max = arr[0][0];
	
	for(i=0; i<len; i++)
	{
		for(j=0;j<len;j++)
		{
			ii << i;
			jj << j;
			i_val=ii.str();
			j_val= jj.str();
			if(i==0 and j==0)
			{
				max_index = "arr[" + i_val + "]["+ j_val +"]";
				min_index = "arr[" + i_val + "]["+ j_val +"]";
			}
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				max_index = "arr[" + i_val + "]["+ j_val +"]";
			}
			
			if(arr[i][j] < min)
			{
				min = arr[i][j];
				min_index = "arr[" + i_val + "]["+ j_val +"]";
			}
		}		
	}
	
	cout<<"Minimum value in the array is: "<<min<<" Presnet at: "<<min_index<<endl;
	cout<<"Maximum value in the array is: "<<max<<" Presnet at: "<<max_index<<endl;
	return 0;
}
