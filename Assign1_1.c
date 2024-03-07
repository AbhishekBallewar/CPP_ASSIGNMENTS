#include<stdio.h>
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();

struct Date{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate){
       ptrDate->day = 12;
       ptrDate->month = 12;
       ptrDate->year = 12;
}
void printDateOnConsole(struct Date* ptrDate){
    printf("%d\n%d\n%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("enter the date month and year\n");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,ptrDate->year);
}
int menu(){
    int choice;
    printf("0. To exit\n 1. To Initialize date\n 2. To print date \n 3. To accept date from user\n");
    scanf("%d",&choice);
    return choice;
}


int main(void){
   struct Date d1;
   int choice;
   while((choice=menu())!=0){
    switch (choice)
    {
    case (1):
        initDate(&d1);
        break;
    case (2):
        printDateOnConsole(&d1);
        break;
    case (3):
        acceptDateFromConsole(&d1);
        break;
    
    default:
        break;
    }
   }
}