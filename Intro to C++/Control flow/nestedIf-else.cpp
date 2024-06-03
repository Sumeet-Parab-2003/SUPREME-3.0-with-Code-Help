#include<iostream>
using namespace std;
int main(){
    float height, weight;
    cout << "Enter your HEIGhT in FEET : ";
    cin >> height;
    

    if(height > 5.7){
        cout << "Enter your  WEIGHT in KG : ";
        cin >> weight;
        if(weight > 65){
            cout << "Your BMI is very good!!";
        }
        else{
            cout  << "Bhai tuze polio hai kya...kitna kam weight hai tera.";
        }
    }
    else{
        cout << "Are ye baccha kiska khogaya. Bhai pehle tu CoMpLadN pi aur height badha fir baat karenge tuzse";
    }
    return 0;
}