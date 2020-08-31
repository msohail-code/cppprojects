/*
* This project is about bus mannagment.
*/
#include<iostream>
#include<string.h>
using namespace std;

//creating class

int s=0; //It is the start add the indexes for array


class bus_sys
{
	public:
		//Creating required variables
		char bus_no[5], drivers[10],arrival[5], depart[5], from[10], to[10],seat[8][4][10];
		
		//creating our main methods
		void addnewbus();
		void getseat();	
		void empty();	
		void show();
		void avail();
		void position(int i);
};

bus_sys bus[10];

void bus_sys::addnewbus()
{
	cout<<"Enter bus#: ";
	cin>>bus[s].bus_no;
	cout<<"Enter Driver's name: ";
	cin>>bus[s].drivers;
	
	cout<<"Departure: ";
	cin>>bus[s].depart;
	
	cout<<"Arrival time : ";
	cin>>bus[s].arrival;
	
	cout<<"From: ";
	cin>>bus[s].from;
	cout<<"To: ";
	cin>>bus[s].to;
	
	s++;
}

void bus_sys::getseat()
{
  int seat;
  char number[5];
  top:
  cout<<"Bus no: ";
  cin>>number;
  int n;
  for(n=0;n<=s;n++)
  {
    if(strcmp(bus[n].bus_no, number)==0)
    break;
  }
  while(n<=s)
  {
    cout<<"Seat Number: ";
    cin>>seat;
    if(seat>32)
    {
      cout<<"There are only 32 seats available in this bus.";
    }
    else
    {
    if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
      {
        cout<<"Enter passanger's name: ";
        cin>>bus[n].seat[seat/4][(seat%4)-1];
       break;
      }
    else
      cout<<"The seat number is already reserved.\n";
      }
      }
    if(n>s)
    {
      cout<<"Enter correct bus no.\n";
      goto top;
    }
}





int main()
{
	int w;
	cout<<"MNSAUM Bus manngement System\n\n\n";
	
	while(1)
	{
		cout<<"1. Create new bus.\n"
		<<"2. Get seat.\n"
		<<"3. Show Bus seats.\n"
		<<"4. Show Available Buses.\n"
		<<"5. Exit\n";
		
		//getting input
		cout<<"Enter you choice: ";
		cin>>w;
		
		switch(w)
		{
			case 1:
				bus[s].addnewbus();				
				break;
			case 2:
				bus[s].getseat();
				break;
			case 3:
				cout<<"\nShowing seats\n\n";
				break;
			case 4:
				cout<<"\nShowing available buses\n\n";
				break;
			case 5:
				cout<<"\nYou are successfully out of system.\n\n";
				exit(0);
		}
			
	}
return 0;
}
