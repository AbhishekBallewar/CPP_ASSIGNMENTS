#include<iostream>
using namespace std;
class Box{
  double length;
  double height;
  double width;
  public :
  Box():Box(1.0,1.0,1.0){}
  Box(double length,double height,double width):length(length),height(height),width(width){}
 
  void volume(){
     cout<<"Volume ="<<this->length*this->height*this->width<<endl;
}
void acceptData(){
   cout<<"Enter length,height and width"<<endl;
   cin>>length>>height>>width;
}
};
int menu(){
    int choice;
    cout<<"0.To exit\n 1.To Calculate volume\n 2.To acceptData"<<endl;
    cin>>choice;
    return choice;
}

int main(void){
    int choice;
    Box b;
     while((choice = menu())!=0){
        switch (choice)
        {
        case 1:
            b.volume();
            break;
        case 2:
            b.acceptData();
            break;
        default:
            break;
        }

     }
}