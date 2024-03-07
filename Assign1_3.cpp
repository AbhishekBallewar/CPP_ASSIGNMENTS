#include<iostream>
using namespace std;
class Date {
    int roll;
    string name;
    int marks;
      public :
    void printNameOnConsole(){
         cout<<"Roll no =" <<this->roll<<"\nName = "<<this->name<<"\n Marks ="<<this->marks<<endl;
    }

    void initStudent(){
       this->roll =12;
       this->name = "Abhi";
       this->marks=13;
    }
    void acceptNameFromConsole(){
        cout<<"enter Roll no, Name and Marks"<<endl;
        cin>>this->roll>>this->name>>this->marks;
    }
    

    
int menu()
    {
    int choice;
    printf("\n0. To exit\n 1. To Initialize Student\n 2. To print Student details \n 3. To accept Student details from user\n");
    scanf("%d",&choice);
    return choice;
    }
};
int main(void){
     Date d1;
    int choice;
    bool x;
    while((choice=d1.menu())!=0){
        switch (choice)
        {
        case 1:
          d1.initStudent();
            break;
        case 2:
          d1.printNameOnConsole();
            break;
        case 3:
          d1.acceptNameFromConsole();
            break;
        default:
        break;
        
        
        }
    }
    
}