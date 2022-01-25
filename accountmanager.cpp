#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class bank
{
        int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        bank(){
          acno=0;
          strcpy(nm,"N/A");
          strcpy(acctype,"N/A");
          bal=0;
        }   
        bank(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
        void balance();
        
};
void bank::deposit()   //depositing an amount
{
        int damt1;
        cout<<" Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}
void bank::withdraw()  //withdrawing an amount
{
        int wamt1;
        cout<<" Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}
void bank::display()  //displaying the details
{       
        cout<<"\n Created Account Details:";
        cout<<"\n ----------------------";
        cout<<"\n Account No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
        cout<<"\n";
}
void bank::balance(){
    cout<<"Current Balance is: "<<bal;
}
int main()
{
        // this bank can have 100 accounts
        bank account[100];
        int acc_no, numberOfAccounts=0;
        int res=1, choice;
        char name[100], acc_type[100];
        float balance;
        int askAccountNo;

         while(res!=0){
          cout<<"Please Select from below listed operations:";cout<<"\n-------------------------------------------";
          cout<<"\n1. Create Account.";
          cout<<"\n2. Check Balance.";
          cout<<"\n3. Withdraw.";
          cout<<"\n4. Deposit.";
          cout<<"\n\n Choose one from the above options: ";
          cin>>choice;
          switch(choice){
            case 1:
                    cout<<"\n Create Account: \n";
                    cout<<"-----------------------";
                    cout<<"\n Account No.[0-100]: ";
                    cin>>acc_no;
                    cout<<" Name : ";
                    cin>>name;
                    cout<<" Account Type : ";
                    cin>>acc_type;
                    cout<<" Balance : ";
                    cin>>balance;
                    account[numberOfAccounts] = bank(acc_no, name, acc_type, balance);  //object is created
                    numberOfAccounts++;
                    cout<<"Account created successfull!";
              break;
            case 2:
                  cout<<"\nPlease enter your account number:";
                  cin>>askAccountNo;
                  if(askAccountNo<0 || askAccountNo>100){
                    while(askAccountNo<0 || askAccountNo>100){
                      cout<<"\nPlease enter valid account number:";
                      cin>>askAccountNo;
                    }
                  }else{
                      account[askAccountNo].balance();
                  }
              break;
            case 3: 
                    cout<<"\nPlease enter your account number:";
                    cin>>askAccountNo;
                    account[askAccountNo].withdraw();
              break;
            case 4:
                    cout<<"\nPlease enter your account number:";
                    cin>>askAccountNo;
                    account[askAccountNo].deposit();
              break;
            default:
              break;
          }
          cout<<"\n\nDo you want to continue ? (1 for yes/ 0 for no):";
          cin>>res;
        }


        return 0;
}
