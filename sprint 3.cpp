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
	cout<<"2 . View Expense "<<endl;
	cout<<"3 . Total Expense "<<endl;
	cout<<"4 . Delete Expense "<<endl;
	cout<<"5 . Exit "<<endl;
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
			{
			int totalexpense=0;
			for(i=0;i<expensecount;i++)
			{
			  cout << i+1<<" . "<< category[i]<<" = " << amount[i] << endl;
				totalexpense=totalexpense+amount[i];
			}
		cout<<"----------------"<<endl;	
		cout <<"Your Total Expense = "<<totalexpense<<endl<<endl;
		cout<<"----------------"<<endl;
		break;	}
		
		case 4 :
		if(expensecount<=0)
		{
			cout<<"No Expenses Added Yet ..!"<<endl<<endl;
			}
		else
		{
			int deletion;
			char Option;
			{for (i=0;i<expensecount;i++)
		     {cout<<"Description : "<<description[i]<<endl;
		cout<<"Category : "<<category[i]<<endl;
		cout<<"Amount : "<<amount[i]<<endl<<endl;}
		cout<<"Which Expense You Want To Delete..?";
		cin>>deletion;
		deletion=deletion-1;
		if(deletion < 0 || deletion >= expensecount)
{
    cout << "Invalid Expense Number !!" << endl << endl;
}
     else
		{
		  cout<<"Do You Really Want To Delete This..?(y/n)";
		cin>>Option;
		if(Option=='y')
		{
			for(int j=deletion;j<expensecount-1;j++)
			{
			description[j]=	description[j+1];
			category[j]=	category[j+1];
					amount[j]=amount[j+1]; }
						cout<<"Expense "<<deletion+1<<" Deleted "<<endl<<endl;
					expensecount--;
					cout<<"Total Number Of Expenses Today = "<<expensecount<<endl<<endl;
		}
		else if(Option=='n')
		{
			cout<<"Deletion Cancelled "<<endl<<endl;
		}
	    }
	    
			
				}
		break;				
			
		case 5 :
		cout<<"Number Of Expenses Today : "<<expensecount<<endl<<endl;
		cout<<"Thank You !! "<<endl;
		break;
		
		default :
		cout<<"Invalid Choice !!"<<endl<<endl;	
	}
  }
 }
  while(choice!=5);
}

