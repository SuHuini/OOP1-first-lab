//program for banking application
#include <iostream>
using namespace std;
int main ()
{
	int bank,branch,account,balance,option,option2,a,b,option3;	//declaring variables
	balance=100000;

	cout<<"Input bank using it's number representative";
	cout<<"\n1.Standard Chartered Bank\n2.Equity Bank\n3.KCB Bank\n4.Cooperative Bank\n5.Chase Bank\n"; //menu for banks
	cin>>bank;
	switch(bank)
	{
		case 1:
			cout<<"Select branch\n1.Nairobi West\n2.City Centre\n3.Ngara\n4.Pangani\n5.Parklands\n"; //menu for branches for option 1
			cin>>branch;
			break;
		case 2:
		    cout<<"Select branch\n1.Moi Avenue\n2.Upperhill\n3.Two Rivers Mall\n4.Westlands\n5.Garden City Mall"; //menu for branches for option 2
			cin>>branch;
			break;
		case 3:
			cout<<"Select branch\n1.Donholm\n2.Kencom\n3.City Centre\n4.Pangani\n5.Ridgeways\n"; //menu for branches for option 3
			cin>>branch;
			break;
		case 4:
			cout<<"Select branch\n1.KPCU\n2.Moi Avenue\n3.Thika\n4.Westlands\n5.City Centre\n"; //menu for branches for option 4
			cin>>branch;
			break;
		case 5:
			cout<<"Select branch\n1.Strathmore University\n2.Nairobi West\n3.Garden City Mall\n4.Westlands\n5.Runda\n"; //menu for option 5
			cin>>branch;
			break;
				
		default:
			cout<<"Invalid input. Select from above"; //output if user doesn't input anything from the menu
			break;
			}
	
	cout<<"Add an account: ";//prompt for user to input account
	cin>>account;
	cout<<"\n1.Withdraw\n2.Deposit\n3.Close\n";//menu for user to
	cin>>option;
	switch(option)
	{
		case 1:
			cout<<"Input amount to withdraw: ";//prompt for user to input amount to withdraw
			cin>>option2;
			
				{
					a=balance-option2;//calculation of remaining balance after withdrawal
					if(a<10000)
			cout<<"\nMinimum balance reached!!";//output if mimimum balance is exceeded
			else
			{
		
			cout<<"\nWithdraw successful. Balance is "<<a;//output when withdrawal is done showing the balance in the account
			cout<<"\nTransaction successful. Thank you!!";
			
		}
			}
				break;
		case 2:
			cout<<"Input amount to deposit: ";//prompt for user to input amount to deposit
			cin>>option3;
			b=balance+option3;//calculation of balance after deposit
			cout<<"\nDeposit successful. Balance is "<<b;//output for the reamining balance
			cout<<"\nTransaction successful. Thank you!!";
			break;
		case 3:
			cout<<"\nThank you!!\n";//output if user doesn't want to deposit or withdraw
			cin>>option2;
			break;
		default:
			cout<<"\nInvalid selection";//output if user doesn't select any option in the menu
			break;
			
	}
	
		system ("pause");
		return 0;
}

	



