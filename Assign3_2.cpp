#include<iostream>
using namespace std;

class Stack{
  int top;
  int *arr;
  int size;
  public:
  Stack(){
     top = -1;
  }
  Stack(int size){
    top = -1;
    arr = new int(size);
    this->size=size;
  }
  int push(int num){
    if(isFull()){
      cout<<"Stack is full"<<endl;
      return -1;
    }  
    arr[++top]=num;
    return -1;
  }

  int pop(){
   if(isEmpty()){
    cout<<"Stack is Empty"<<endl;
    return -1;
   }
   
    return arr[top--];
  }

  int peek(){
    if(isEmpty()){
    cout<<"Stack is Empty"<<endl;
    return -1;
   }
   return arr[top];
  }

  int printStack(){
         if(isEmpty()){
            cout<<"Stack is empty";
            return -1;
          }
          while(top!=-1){
            cout<<"Element at index "<<top<<"="<<arr[top--]<<endl;
          }
          return 0;
  }

  bool isEmpty(){
       return (top==-1);
  }

  bool isFull(){
         return (top==(size-1)); 
  }

  ~Stack(){
    delete []arr;
  }
};
int menu(){
  int choice;
    cout<<"0.To Exit"<<endl<<"1.To Push"<<endl;
    cout<<"2.To Pop"<<endl<<"3.To Peek"<<endl;
    cout<<"4.To Print stack";
    cout<<endl;
    
    cin>>choice;
    return choice;

}
int main (void){
  int choice;
  int size;
  cout<<"Enter the size of the array"<<endl;
  cin>>size;
  Stack st(size);
  int num;
  int poped;
  int peeked;
  
  enum Cases{EXIT=0,PUSH=1,POP,PEEK,PRINTSTACK};
      while((choice = menu())!=0){
         switch (Cases(choice))
         {
         case PUSH:
         cout<<"Enter number to be pushed"<<endl;
         cin>>num;
          st.push(num);
          break;
          case POP:
           poped = st.pop();
          if(poped!=-1){
          cout<<"popped element is"<<poped<<endl;
          }
          break;
          case PEEK:
          peeked = st.peek();
         if(peeked!=-1){
          cout<<"peek element is"<<peeked<<endl;
          break;
          case PRINTSTACK:
          st.printStack();
          break;
         
         default:
         cout<<"invalid choice"<<endl;
          break;
         }
      }
     
}
}
