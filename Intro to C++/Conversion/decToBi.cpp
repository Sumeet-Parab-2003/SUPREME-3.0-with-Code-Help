#include <iostream>
#include<cmath>
using namespace std;

// int deciToBi1(int n){
//     int i=0;

//     while(n>0){
//         int bit = n%2;
//         cout<<bit;
//         n = n / 2; 
//     }
//     return 0;
//     //USING THIS METHOD THE FINAL ANS NEED TO BE REVERSED
// }

int deciToBi2(int n){
    int i=0;

    while(n>0){
        int bit = n%2;
        cout<<bit;
        n = n / 2; 
    }
    return 0;
    //USING THIS METHOD THE FINAL ANS NEED TO BE REVERSED
}


int main(){
    int n;
    cin>>n;
    int binary = deciToBi1(n);
   // cout << binary<<endl;

}