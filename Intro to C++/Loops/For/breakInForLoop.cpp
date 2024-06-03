#include<iostream>
using namespace std;

int main(){

    // print 1 to 5 no.s with condition in loop ---> i=1 ; i<=10 ; i++
    for (int i = 1; i<=10; i++){
        cout << i << " ";
        if(i==5){
            break;
        }
    }

    return 0;
}