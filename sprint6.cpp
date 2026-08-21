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
	cout<<"5 . Edit Expense "<<endl;
	cout<<"6 . Search Expense "<<endl;
	cout<<"7 . Exit "<<endl;
	do{
	cout<<"Enter Your Choice : ";
	cin>>choice;
	if(!(cin>>choice))
	{
		cout<<"Enter The Proper Choice Number ..^"<<endl<<endl;
	}
     }
	while(cin>>choice);
	system("cls");
	switch(choice)
	{
		case 1 :
		if(expensecount<100) 
		{cout<<"Enter The Description : ";
		cin>>description[expensecount];
		cout<<"Enter Category : ";
		cin>>category[expensecount];
		do{
		cout<<"Enter Amount : ";
		if(amount<0)
		{
			cout<<"Invalid Amount Entered ..!!"<<endl<<endl;
		}
		else
		{
		 cin>>amount[expensecount]; }
		 }
		 while(amount<0);
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
		do{
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
		else
		{
			cout<<"Enter either Yes(y) Or No(n)...!!"<<endl<<endl;
		}
	}
	    }
	    while(Option!='y'&&Option!='n');
	    
			
				}
		break;
		
		case 5 :
			int edit,edits;
			if(expensecount==0)
			{
				cout<<"No Expenses Added Yet"<<endl<<endl;
			}
			else
			{
				cout<<"Which Expense You Want To Edit : ";
			    cin>>edits;
			    edits=edits-1;
				
					if(edits>=0 && edits<expensecount)
					{
					
				 cout<<edits+1<<" . ->"<<description[edits]<<endl;
					cout<<"    ->"<<category[edits]<<endl;
					cout<<"    ->"<<amount[edits]<<endl<<endl;
					cout<<"-------------------------------------------------"<<endl<<endl;
					cout<<"1.Description "<<endl;
					cout<<"2.Category "<<endl;
					cout<<"3.Amount "<<endl<<endl;
						cout<<"Which Choice You Want To Edit : ";
			cin>>edit;
			string newdescription,newcategory;
		    int newamount;
			switch(edit)
			{
				case 1:
				cout<<"Current Description : "<<description[edits]<<endl;
				cout<<"Enter New Description : ";
				cin>>newdescription;
				description[edits]=newdescription;
				cout<<"Updated Succesfully ..!! "<<endl<<endl;
				cout<<"--------------------------------------"<<endl<<endl;
				break;
				
				case 2:
				cout<<"Current Category : "<<category[edits]<<endl;
				cout<<"Enter New Category : ";
				cin>>newcategory;
		        category[edits]=newcategory;
		        cout<<"Updated Succesfully ..!! "<<endl<<endl;
		        cout<<"--------------------------------------"<<endl<<endl;
				break;
				
				case 3:
				cout<<"Current Amount : "<<amount[edits]<<endl;
				cout<<"Enter New Amount : ";
				cin>>newamount;
		        amount[edits]=newamount;
		        cout<<"Updated Succesfully ..!! "<<endl<<endl;
		        cout<<"--------------------------------------"<<endl<<endl;
				break;
				
				default:
                cout<<"Invalid Edit Choice !!"<<endl<<endl;
                break;
					
			}
				    }
					else
					{
						cout<<"Invalid Number Entered ...!!"<<endl<<endl;
					}
			}
			break;
			
			case 6 :
			{
				int categorytotal=0;
				if(expensecount==0)
			{
				cout<<"No Expenses Added Yet  ..!!"<<endl<<endl;
			}
			else
			{
				string search;
				cout<<"Enter The Category You Want To Search : ";
				cin>>search;
				bool found = false;
				cout<<"********** "<<search<<" Expenses **********"<<endl<<endl;
				for(i=0;i<expensecount;i++)
				{
					if(search==category[i])
					{
						 cout<<i+1<<" . ->"<<description[i]<<endl;
					cout<<"    ->"<<category[i]<<endl;
					cout<<"    ->"<<amount[i]<<endl<<endl;
					categorytotal=categorytotal+amount[i];
					found = true ;
					}
				}
					if(!found)
					{
						cout<<"Invalid Category Entered..!!"<<endl<<endl;
					}
					else 
					{
							cout<<"--------------------"<<endl;
					cout<<"Your Total "<< search <<"Expenses Is : "<<categorytotal<<endl;
					cout<<"--------------------"<<endl;
					}
		    }
		    break;
		}
			
		case 7 :
		cout<<"Number Of Expenses Today : "<<expensecount<<endl<<endl;
		cout<<"Thank You !! "<<endl;
		break;
		
		default :
		cout<<"Invalid Choice !!"<<endl<<endl;	
	}
  }
 }
  while(choice!=7);
}

