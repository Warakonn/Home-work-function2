#include<iostream>
#include<string>
using namespace std;
int update_balance( int command, int &balance, int money)
{
	if(command == 1)
	{
		balance-=money;
	}
	else if(command == 2)
	{
		balance+=money;
	}
	
	return(balance);
}
int main()
{
	int command;
	int balance=10000,money;
	cout<<"Your balance = "<< balance <<endl;

	do{
		cout<<"Input command (1 withdraw, 2 deposit, 0 exit): ";
		cin>>command;
		cout<<"Input amount : ";
		cin>>money;
		cout<<"Your balance"<<" "<<update_balance(command, balance, money);
		cout<<endl;
		if(command == 0){
			cout<<"Exit Program.....\n";
		}
	}while(command!=0);
	
	return(0);
}

