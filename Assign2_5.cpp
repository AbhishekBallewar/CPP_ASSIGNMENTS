#include <iostream>
using namespace std;
class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int generate_accno;

public:
    BankAccount() : accno(++generate_accno),name("Abhi"),balance(8.00) {}

    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptaccountDeatils()
    {
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter initial Balance - ";
        cin >> balance;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balanace = " << balance << endl;
    }
};

int BankAccount::generate_accno = 1000;
int menu(){
    int choice;
    cout<<" 0. To exit\n 1.To Create Account\n 2. To Accept Details\n 3. To Display Details"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    BankAccount *accptr;
    int choice;   
    accptr = new BankAccount; 
    while((choice=menu())!=0){
        switch (choice)
        {
        case 1 :
            accptr = new BankAccount;
            break;
        case 2 :
           accptr->acceptaccountDeatils();
            break;
        case 3:
           accptr->displayAccountDeatils();
            break;
        
        default:
            break;
        }
    }
    delete accptr;
    accptr = NULL;

    return 0;
}

int main1()
{
    BankAccount acc1("rohan", 10000);
    BankAccount acc2("nilesh", 15000);
    BankAccount acc3("nitin", 20000);
    BankAccount acc4("Rajiv", 20000);
    BankAccount acc5("yogesh", 20000);

    acc1.displayAccountDeatils();
    acc2.displayAccountDeatils();
    acc3.displayAccountDeatils();
    acc4.displayAccountDeatils();
    acc5.displayAccountDeatils();

    return 0;
}