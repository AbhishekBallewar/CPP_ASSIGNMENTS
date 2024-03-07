#include<iostream>
using namespace std;
class Address{
 string building;
 string street;
 string city;
 int pin;

 public:
  Address(): Address("default","default","default",123456){}
  Address(string building,string street,string city,int pin):building(building),street(street),city(city),pin(pin){}
    
  void setBuilding(string building){
         this->building=building;
  } 
  void setStreet(string street){
         this->street=street;
  }  
  void setCity(string city){
         this->city=city;
  }  
  void setPin(int pin){
         this->pin=pin;
  }   
  string getBuilding(){
    return this->building;
  }
   string getStreet(){
    return this->street;
  }
   string getCity(){
    return this->city;
  }
   int getPin(){
    return this->pin;
  }
  void display(){
    cout<<"Address ="<<building<<","<<street<<","<<city<<","<<pin;
  }
  void accept(){
    cout<<"Enter Building"<<endl;
    cin>>building;
    cout<<"Enter Street"<<endl;
    cin>>street;
    cout<<"Enter city"<<endl;
    cin>>city;
    cout<<"Enter pin"<<endl;
    cin>>pin;
    
  }
};

int main(void){
    Address a;
    a.accept();
    a.display();
}
