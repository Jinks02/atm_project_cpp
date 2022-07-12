#include<iostream>
using namespace std;
void Menu(){
     
     cout<<"****MENU**** "<<endl;
     cout<<"1.Check Balance"<<endl;
     cout<<"2.Add Deposit"<<endl;
     cout<<"3.Withdraw Money"<<endl;
     cout<<"4.Exit"<<endl;
     cout<<"******** "<<endl;

}
int main(int argc, char const *argv[])
{
    int option;
    double balance=1000;
    
    do
    {
        Menu();
        cout<<"Enter the respective option number:";
        cin>>option;
        
        switch (option)
        {
        case 1:cout<<"Your balance is: "<<balance<<"$"<<endl;
        break;
        case 2:cout<<"Enter deposit amount :";
        double depositamt;
        cin>>depositamt;
        balance+=depositamt;
        break;
        case 3:cout<<"Enter withdraw amount :";
        double withdrawamt;
        cin>>withdrawamt;
        if (withdrawamt<=balance)
        {
            balance-=withdrawamt;
        }
        else{
            cout<<"Insufficient money to withdraw"<<endl;
        }
        break;
        
        }
        
    } while (option!=4);
    
    return 0;
}
