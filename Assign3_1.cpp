#include<iostream>
using namespace std;
class Time {
   int h;
   int m;
   int s;

   public :
   Time():Time(0,0,0){}
   Time(int h,int m,int s):h(h),m(m),s(s){}
   int getHour(){
    return this->h;
   }

   int getMinute(){
    return this->m;
   }

   int getSeconds(){
    return this->s;
   }
   void acceptTime(){
    cout<<"Enter Hours"<<endl;
    cin>>this->h;
    cout<<"Enter Minutes"<<endl;
    cin>>this->m;
    cout<<"Enter Seconds"<<endl;
    cin>>this->s;
   }

   void printTime(){
     cout<<"Time is"<<this->h<<":"<<this->m<<":"<<this->s<<endl;
   }
   void setHour(int h){
    this->h =h;
   }
   void setMinute(int m){
    this->m=m;
   }
   void setSeconds(int s){
    this->m=m;
   }
};
int menu(){
    int choice;
    cout<<"0.To exit"<<endl<<"1.To Create Object"<<endl;
    cin>>choice;
    return choice;
}
int menu2(){
    int choice;
    cout<<"0.To exit"<<endl<<"1.To Print Time at a particular object"<<endl;
    cin>>choice;
    return choice;
}
int main (void){
    int size,choice;
    int i = 0;
     cout<<"Enter the size of the Time Array";
     cin>>size;
    Time **tptr=new Time *[size];

     while(((choice=menu())!=0)&&i<size){
        switch (choice)
        {
        case 1:{
            tptr[i]=new Time();
            tptr[i]->acceptTime();
            break;
            }
        default:
            break;
        }
        i++;
     }
     while((choice=menu2()!=0)){
            cout<<"Enter index to get that objects time "<<endl;
            cin>>i;
           tptr[i]->printTime();
     }
     for(i=0;i<size;i++){
        delete tptr[i];
        tptr[i]=NULL;
     }
}