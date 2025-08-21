#include<stdio.h>

/*
Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/

typedef struct {
    int day, month, year;
} Date;

void initDate(Date* ptrDate){
    ptrDate->day = 21;
    ptrDate->month = 8;
    ptrDate->year = 2025;
}

void printDateOnConsole(Date* ptrDate){
    if (ptrDate->month < 10){
        printf("\nDate: %d:0%d:%d", ptrDate->day, ptrDate->month, ptrDate->year);
    }
    else{
        printf("\nDate: %d:%d:%d", ptrDate->day, ptrDate->month, ptrDate->year);
    }
};

void acceptDateFromConsole(Date* ptrDate){
    int temp;
    printf("\nEnter Day: ");
    scanf("%d",&temp);
    if(temp>0 && temp<31){
        ptrDate->day = temp;
    }
    else{
        printf("Enter correct date!");
    }
    printf("Enter Month: ");
    scanf("%d",&temp);
    if(temp>0 && temp<13){
        ptrDate->month = temp;
    }
    else{
        printf("Enter correct month!");
    }
    printf("Enter Year: ");
    scanf("%d",&temp);
    if(temp>0000 && temp<9999){
        ptrDate->year = temp;
    }
    else{
        printf("Enter correct year!");
    }
};


int main(){

    Date date;
    int choice;

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch (choice){
    case 0:
        initDate(&date);
        printDateOnConsole(&date);
        break;
    case 1: 
        printDateOnConsole(&date);
        break;
    case 2: 
        acceptDateFromConsole(&date);
        printDateOnConsole(&date);
        break;
    }
    return 0;
}