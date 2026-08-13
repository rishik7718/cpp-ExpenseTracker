#include<iostream>
#include<string>
using namespace std;
int main()
{
    int choice,i,amount[100];
	string description[100],category[100];
	int expensecount=0;
	do
	{
	 cout<<"**********Expense Tracker**********"<<endl;
	cout<<"1. Add Expense "<<endl;
	cout<<"2 . Veiw Expense "<<endl;
	cout<<"3 . Exit "<<endl;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	system("cls");
	switch(choice)
	{
		case 1 :
		if(expensecount<100) 
		{cout<<"Enter The Description : ";
		cin>>description[expensecount];
		cout<<"Enter Category : ";
		cin>>category[expensecount];
		cout<<"Enter Amount : ";
		cin>>amount[expensecount];
		cout<<"Expense Added !!"<<endl<<endl;
		expensecount++;}
		else
		{
			cout<<"Storage Full !!"<<endl<<endl;
		}
		break;
		
		case 2 :
			if(expensecount>0)
		{for (i=0;i<expensecount;i++)
		     {cout<<"Description : "<<description[i]<<endl;
		cout<<"Category : "<<category[i]<<endl;
		cout<<"Amount : "<<amount[i]<<endl<<endl;}
	    }
		else
		{
			cout<<"No Expenses Yet !! "<<endl<<endl;
			}
		break;		
			
		case 3 :
		cout<<"Number Of Expenses Today : "<<expensecount<<endl<<endl;
		cout<<"Thank You !! "<<endl;
		break;
		
		default :
		cout<<"Invalid Choice !!"<<endl<<endl;	
	}
  }
  while(choice!=3);
}
