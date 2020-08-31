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
	bus[s].empty();
	
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
    {
    	cout<<"The seat number is already reserved.\n";
	}
    }
    }
    if(n>s)
    {
      cout<<"Enter correct bus no.\n";
      goto top;
    }
}

void bus_sys::empty()
{
  for(int i=0; i<8;i++)
  {
    for(int j=0;j<4;j++)
    {
      strcpy(bus[s].seat[i][j], "Empty");
    }
  }
}

void bus_sys::show()
{

  int n;

  char number[5];

  cout<<"Enter bus no: ";

  cin>>number;

  for(n=0;n<=s;n++)

  {

    if(strcmp(bus[n].bus_no, number)==0)

    break;

  }

while(n<=s)

{

  cout<<"=======================================================================================\n";

  cout<<"Bus no: \t"<<bus[n].bus_no

  <<"\nDriver: \t"<<bus[n].drivers<<"\t\tArrival time: \t"

  <<bus[n].arrival<<"\tDeparture time:"<<bus[n].depart

  <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<

  bus[n].to<<"\n";

  cout<<"=======================================================================================\n";

  bus[0].position(n);

  int a=1;

  for (int i=0; i<8; i++)

  {

    for(int j=0;j<4;j++)

    {

      a++;

      if(strcmp(bus[n].seat[i][j],"Empty")!=0)

      cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";

    }

  }

  break;

  }

  if(n>s)

    cout<<"Enter correct bus no: ";

}

void bus_sys::position(int l)
{
  int q=0,p=0;
  for (int i =0; i<8;i++)
  {
    cout<<"\n";
    for (int j = 0;j<4; j++)
    {
      q++;
      if(strcmp(bus[l].seat[i][j], "Empty")==0)
        {
          cout.width(5);
          cout.fill(' ');
          cout<<q<<".";
          cout.width(10);
          cout.fill(' ');
          cout<<bus[l].seat[i][j];
          p++;
        }
        else
        {
	        cout.width(5);
	        cout.fill(' ');	
	        cout<<q<<".";	
	        cout.width(10);	
	        cout.fill(' ');	
	        cout<<bus[l].seat[i][j];
        }
      }
    }
  cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].bus_no;
}

void bus_sys::avail()
{
  for(int n=0;n<s;n++)
  {
    cout<<"=======================================================================================\n";
    cout<<"Bus no: \t"<<bus[n].bus_no<<"\nDriver: \t"<<bus[n].drivers
    <<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"
    <<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
    <<bus[n].to<<"\n";
    cout<<"=======================================================================================\n";   
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
				bus[0].show();
				break;
			case 4:
				bus[0].avail();
				break;
			case 5:
				cout<<"\nYou are successfully out of system.\n\n";
				exit(0);
		}
			
	}
return 0;
}
