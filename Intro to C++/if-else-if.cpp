#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter Your makrs : ";
    cin >> marks;
    
    if(marks > 90){
        cout << "Well done! You got A+ grade.";
    }
    else if(marks > 80){
        cout << "Well done! You got A grade.";
    }
    else if(marks > 70){
        cout << "Great! You got B grade.";
    }
    else if(marks > 60){
        cout << "You got C grade.";
    }
    else if(marks > 50){
        cout << "You got D grade.";
    }
    else if(marks > 40){
        cout << "You got E grade.";
    }
}