#include<iostream>
using namespace std;

inline int smallest(int a,int b)
{
        int r;
        r=(a<b)?a:b;
        return(r);
}

int main()
{
        int a,b;

        cout<<"\nEnter 1st number :: ";
        cin>>a;
        cout<<"\nEnter 2nd number :: ";
        cin>>b;

        cout<<"\nSmallest of two numbers [ "<<a<<", "<<b<<" ] is :: "<<smallest(a,b)<<"\n";
}

