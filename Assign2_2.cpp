#include<iostream>
using namespace std;
class Tollbooth{
      unsigned int cars;
      double earnings;
      unsigned int payingCars;
      unsigned int nonPayingCars;

      public:
      Tollbooth(){
        cars =0;
        earnings = 0.0;
        payingCars=0;
        nonPayingCars=0;
      }
      void payingCar(){
        cars++;
        payingCars++;
        earnings = earnings + 0.50;
      }
      void nonPayingCar(){
        cars++;
        nonPayingCars++;
      }
      void printOnConsole(){
        cout<<"Total no of cars ="<<cars<<"\nTotal no of nonpaying cars ="<<nonPayingCars<<"\nTotal no of Paying cars ="<<payingCars<<"\n Earnings ="<<earnings<<endl;
      }
};
int menu(){
    int choice;
    cout<<"0.To exit \n 1.To Collect from Paying car\n 2. To record a non paying car\n 3.To print Earnings total no of cars as well as paying and non paying cars"<<endl;
    cin>>choice;
    return choice;
}
int main (void){
      Tollbooth t;
      int choice;
      while((choice=menu())!=0){
        switch (choice)
        {
        case 1:
            t.payingCar();
            break;
            case 2:
            t.nonPayingCar();
            break;
            case 3:
            t.printOnConsole();
            break;
        
        default:
            break;
        }
      }
}