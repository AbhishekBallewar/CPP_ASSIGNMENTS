#include<iostream>
using namespace std;
class Date {
    int day;
    int month;
    int year;
      public :
    void printDateOnConsole(){
         cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    void initDate(){
       this->day =12;
       this->month = 12;
       this->year=13;
    }
    void acceptDateFromConsole(){
        cout<<"enter day, month and year";
        cin>>this->day>>this->month>>this->year;
    }
    
    bool Leap(){
      if (this->year%400==0){
        return true;
      }
      else if(this->year%100 == 0){
        return false;
      }
      else if(this->year%4==0){
        return true;
      }
      else{
        return false;
      }
    }
    
    int menu(){
    int choice;
    printf("\n0. To exit\n 1. To Initialize date\n 2. To print date \n 3. To accept date from user\n 4. To check if year is leap\n");
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
          d1.initDate();
            break;
        case 2:
          d1.printDateOnConsole();
            break;
        case 3:
          d1.acceptDateFromConsole();
            break;
        case 4:  
         x = d1.Leap();
          if(x==true){
        cout<<"it is leap";
        }
          else{
        cout<<"not leap";
        }
            break;
        
        
        }
    }
    
}