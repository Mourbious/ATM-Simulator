#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class Bank {
private:
    string name;
    long account_number;
    char account_type[10];
    long deposit = 0;
    long withdraw = 0;
    long total = 0;
public:
    void setvalue()
    {
    	system("cls");
        cout << "Enter name\n";
        cin>>name;
        cout << "Enter Account number\n";
        cin >> account_number;
        cout << "Enter Account type\n";
        cin >> account_type;
        cout << "Enter Balance\n";
        cin >> total;
        system("cls");
    }
    void show_data()
    {
    	system("cls");
        cout << "\t a. Name:" << name << endl;
        cout << "\t b. Account No:" << account_number << endl;
        cout << "\t c. Account type:" << account_type << endl;
        cout << "\t d. Balance:" << total << endl;
        
    }
    void deposits()
    {
    	system("cls");
        cout << "\nEnter amount to be Deposited\n";
        cin >> deposit;
        total+=deposit;
        
    }
    void showbal()
    {
    	system("cls");
        cout << "\nTotal balance is: " << total;
        
    }
    void withdrawl()
    {
    	system("cls");
        cout << "Enter amount to withdraw\n";
        cin >> withdraw;
        if(withdraw<=total){
        total-=withdraw;
		cout << "Available Balance is" << total;}
        else{cout<<"Not Enough Balance";
		}
        
    }
};
 
int main()
{
    Bank a;
    int choice;
    system("cls");
    while (10) {
        cout << "\n 1. Enter name, Account number, Account type\n";
        cout << "\n 2. Balance Enquiry\n";
        cout << "\n 3. Deposit Money\n";
        cout << "\n 4. Show Total balance\n";
        cout << "\n 5. Withdraw Money\n";
        cout << "\n 6. Cancel\n";
        cin >> choice;
        
        switch (choice)
		{
        case 1:
            a.setvalue();
            break;
        case 2:
            a.show_data();
            break;
        case 3:
            a.deposits();
            break;
        case 4:
            a.showbal();
            break;
        case 5:
            a.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
        
    }
return 0;
}
