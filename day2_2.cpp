#include<iostream>

/*
Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/

using namespace std;

class Date {
    int day, month, year;

    public:

    void initDate();
    void printDateOnConsole();
    void acceptDateFromConsole();
    bool isLeapYear();

};

void Date::initDate(){
    this->day = 21;
    this->month = 8;
    this->year = 2025;
}

void Date::printDateOnConsole(){
    if (this->month < 10){
        std::cout<< "Date: "  << this->day << ":" << "0" << this->month << ":" << this->year << std::endl;
    }
    else{
        std::cout<< "Date: "  << this->day << ":" << this->month << ":" << this->year << std::endl;
    }
};

void Date::acceptDateFromConsole(){
    int temp;
    cout << "\nEnter Day: ";
    cin >> temp;
    if(temp>0 && temp<31){
        this->day = temp;
    }
    else{
        cout<< "Enter correct date!" << endl;
    }
    cout << "Enter Month: ";
    cin >> temp;
    if(temp>0 && temp<13){
        this->month = temp;
    }
    else{
        cout<< "Enter correct month!" << endl;
    }
    cout << "Enter Year: ";
    cin >> temp;
    if(temp>0000 && temp<9999){
        this->year = temp;
    }
    else{
        cout<< "Enter correct year!" << endl;
    }
};

bool Date::isLeapYear(){
    if(this->year % 4 == 0){
        return true;
    }
    return false;
} 

int main(){

    Date date;
    int choice;

    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice){
    case 0:
        date.initDate();
        date.printDateOnConsole();
        break;
    case 1: 
        date.printDateOnConsole();
        break;
    case 2: 
        date.acceptDateFromConsole();
        date.printDateOnConsole();
        break;
    case 3:
        if(date.isLeapYear()){
            cout<< "Current Date is in Leap Year!" << endl;
        }
        else{   
            cout<< "Current Date is not in Leap Year!" << endl;
        }
    }
        
    return 0;
}