#include<iostream>
using namespace std;
int main(){
    char grade;
    cout << "Enter your grade : ";
    cin >> grade;

    switch(grade){
        case 'A' : 
            cout << "Range of your marks is from 91 to 100";
            break;
        case 'B' : 
            cout << "Range of your marks is from 81 to 90";
            break;
        case 'C' : 
            cout << "Range of your marks is from 71 to 80";
            break;
        case 'D' : 
            cout << "Range of your marks is from 56 to 70";
            break;
        case 'E' : 
            cout << "Range of your marks is from 40 to 55";
            break;
        case 'F' : 
            cout << "You are FAILED, Since your makrs are below 40";
            break;
        default : 
            cout << "The grade you entered is INVALID! \nPlease enter a VALID grade";
    }

    return 0;
}