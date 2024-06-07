#include<iostream>
using namespace std;

int main(){

    // print 1 to 5 no.s without changing condition in loop ---> i=1 ; i<=10 ; i++
    for (int i = 1; i<=10; i++){
        cout << i << " ";
        if(i==5){
            break;
        }
    }


    // this alternate solution only prints from 1 to 4 and it is because, break is written before printing.
    // for (int i = 1; i<=10; i++){
    //     if(i==5){
    //         break;
    //     }
    //     cout << i << " ";
    // }

    return 0;
}