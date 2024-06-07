#include<iostream>
using namespace std;
int main (){
    // in loops "Continue" stmt can be use to skip an iteration


    //Ex1. Print 1 to 10 no.s without printing 3
    // for(int i=1; i<=10; i++){
    //     if(i==3){
    //         continue;
    //     }
    //     cout << i << " ";
    // }

    //Ex2. Print 1 to 10 no.s without printing 3 and 6
    for(int i=1; i<=10; i++){
        if(i==3 || i==6){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}