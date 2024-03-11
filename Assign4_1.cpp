#include<iostream>
using namespace std;
class Date{
     int day;
     int month;
     int year;
     
     public:
     Date():Date(1,1,2024){}
     Date(int day,int month,int year):day(day),month(month),year(year){}
     int getDay(){
         return this->day;
     }
     void setDay(int day){
         this->day=day;
     }
     int getMonth(){
         return this->month;
     }
     void setMonth(int month){
         this->month = month;
     }
     int getYear(){
         return this->year;
     }
     void setYear(int year){
         this->year = year;
     }
     void setDate(int day,int month,int year){
          this->day = day;
          this->month = month;
          this->year = year;
     }
     void displayDate(){
        cout<<"Date :-"<<day<<"/"<<month<<"/"<<year<<endl;
     }
     void acceptDate(){
        cout<<"Enter the day"<<endl;
        cin>>day;
        cout<<"Enter the Month"<<endl;
        cin>>month;
        cout<<"Enter the Year"<<endl;
        cin>>year;

     }
     void Leap(){
        if(this->year%400 == 0){
            cout<<"It is leap year"<<endl;
        }
        else if(this->year%100 == 0){
            cout<<"It is not a leap year"<<endl;
        }
        else if(this->year%4==0){
            cout<<"It is a leap year"<<endl;
        }
        else{
            cout<<"It is not a leap year"<<endl;
        }
     }
};
class Person{
  string name;
  string address;
  Date birth;
  public:
  Person():Person("Default","Default",1,1,1){}
  Person(string name,string address,int day,int month,int year):birth(day,month,year){
    this->name=name;
    this->address=address; 
  }
  string getName(){
    return this->name;
  }
  void setName(string name){
    this->name = name;
  }
  string getAddress(){
    return this->address;
  }
  void setAddress(string address){
    this->address = address;
  }
  void getBirth(){
      cout<<"Birth ";
      birth.displayDate();
  }
  void setBirth(int day,int month,int year){
     birth.setDate(day,month,year);
  }
  void displayPerson(){
    cout<<"Name :-"<<name<<endl<<"Address:-"<<address<<endl;
    cout<<"Birth ";
    birth.displayDate();
  }
  void acceptPerson(){
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Address"<<endl;
    cin>>address;
    cout<<"Enter The Birth Date"<<endl;
    birth.acceptDate();
  }


};
class Employee:Person{
      int id;
      float salary;
      string dept;
      Date dobj;

      public:
      Employee():Employee(1,1.0,"default",1,1,2024){}
      Employee(int id,float salary,string dept,int day,int month,int year):dobj(day,month,year){}

      int getId(){
        return this->id;
      }
      void setId(int id){
        this->id =id;
      }
      float getSalary(){
        return this->salary;
      }
      void setSalary(float salary){
        this->salary =salary;
      }
      string getDept(){
        return this->dept;
      }
      void setDept(string dept){
        this->dept = dept;
      }
      void setJoiningDate(int day,int month,int year){
             dobj.setDate(day,month,year);
      }
      void acceptEmployee(){
           cout<<"Enter Joining Date"<<endl;
           dobj.acceptDate();
           cout<<"Enter the Id"<<endl;
           cin>>id;
           cout<<"Enter the Salary"<<endl;
           cin>>salary;
           cout<<"Enter the Dept"<<endl;
           cin>>dept;
           acceptPerson();
      }
      void displayEmployee(){
        cout<<"id = "<<id<<endl<<"salary ="<<salary<<endl<<"dept ="<<dept<<endl;
        cout<<"Joining ";
        dobj.displayDate();
        displayPerson();
      }
    void getJoiningDate(){
        dobj.displayDate();
      }
    void getBirthDate(){
        getBirth();
      }
      void setBirthDate(){
        setBirth(12,4,1999);
      }
};
int main(void){
       
       /*Person p;
       p.acceptPerson();
       p.displayPerson();
       cout<<"Name :-"<<p.getName()<<endl;
       cout<<"Address :-"<<p.getAddress()<<endl;
       p.getBirth();
       p.setName("Abhi");
       p.setAddress("Mumbai");
       p.setBirth(12,04,1999);
       p.displayPerson();*/

         Employee e;
         e.acceptEmployee();
         cout<<endl;
         e.displayEmployee();
         cout<<endl;
         cout<<"Id :-"<<e.getId()<<endl;
         cout<<"Salary :-"<<e.getSalary()<<endl;
         cout<<"Department:-"<<e.getDept()<<endl;
         e.getBirthDate();
         e.setId(25);
         e.setSalary(20000.00);
         e.setDept("DAC");
         cout<<endl;
         e.displayEmployee();
         
         
         
         

      /* Date dobj;
       dobj.acceptDate();
       dobj.displayDate();
       cout<<"Day:-"<<dobj.getDay()<<endl;
       cout<<"Month:-"<<dobj.getMonth()<<endl;
       cout<<"Year:-"<<dobj.getYear()<<endl;
       dobj.setDay(25);
       dobj.setMonth(12);
       dobj.setYear(2021);
       dobj.displayDate();
       dobj.Leap();*/



}