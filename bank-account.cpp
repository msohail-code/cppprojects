#include <iostream> 
#include<string>  // We are using just getline function from this libaray
using namespace std;


//Creating a class which can be a bank account

class bank_account
{
	public:
		// Creating our data memebers name and account number 
		string name; // Store the name of the account
		double balance; // it will store the balance of the account
		
		//constructor 
		
		bank_account(string name)
		{
			this->name = name;  // Here we will store the name of the user
			this->balance=0; // we first initialize the balance to 0 here
		}
		//Creating our members functions
		
		// this function will display the account number and the name of account
		void display() 
		{
			cout<<"Your Account title: "<<this->name<<endl;
			cout<<"Your Account balance: "<<this->balance<<endl;
		}
		
		// Will deposit the ammount to the account if yes then true else false
		bool deposit(double n)
		{
			this->balance += n;
			return true;
		}
		
		// Will withdraw the ammount from the account if yes then true else false
		bool withdraw(double n)
		{
			if(this->balance > n)
			{
				this->balance -= n;
				return true;
			}
			else
			{
				return false;
			}
		}
		
};

// Print the = for n numbers

void dashes(int n, string optr)
{
	for(int i=0; i<n; i++)
		cout<<optr;
}

// Displaying the menu to the user for selecting an option

void showcase()
{
	cout<<"1. Deposit an amount."<<endl;
	cout<<"2. Withdraw an amount."<<endl;
	cout<<"3. Display name and Balance"<<endl;
	cout<<"0. Exit"<<endl<<endl;
	cout<<"Please enter your choice: ";
}

// This function is responsible for show the top bar in the with * Some text and start * in the function



// our main function
int main()
{

	bank_account obj("Ibrar"); // create an object of the bank_account
	int n;
	double amount; // will be the amount of the account
	dashes(30,"=");
	cout<<"\tBank account Management\t";
	dashes(30,"=");
	cout<<endl<<endl;
	showcase(); //this function is showing the menu
	
	cin>>n;
	while(n != 0)
	{
		switch(n)
		{
			
			case 1:
				cout<<"Enter the amount you want to deposit: ";
				cin>>amount;
				if( obj.deposit(amount) )
				{
					cout<<"Amount has been deposited."<<endl;
				}
				else
				{
					cout<<"Amount has not been deposited."<<endl;
				}
				
				break;
			case 2:
				cout<<"Enter the amount you want to withdraw: ";
				cin>>amount;
				if( obj.withdraw(amount) )
				{
					cout<<"Amount has been withdraw."<<endl;
				}
				else
				{
					cout<<"Amount has not been withdraw. Please check you have enough balance or not"<<endl;
					
				}
				
				break;
			case 3:
				obj.display();
				
				break;
				
		}
		cout<<endl;
		showcase();
		cin>>n;
	}
	
	return 0;
	
}
