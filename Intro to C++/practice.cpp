#include <iostream>
using namespace std;

// void fullPyramid(int n){
//     for(int i=0; i<n; i++){
        
//         //spaces
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=0 ; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     fullPyramid(n);

// }

// int main(){
//     //inverted full pyramid
//     int n;
//     cin >> n;
    
//     for(int i=0; i<n; i++){
//         //spaces
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=0; j<n-i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// int main(){
//     // dimond = full pyramid + inverted full pyramid
//     int n;
//     cin >> n;
//     //full pyramid
//      for(int i=0; i<n; i++){
        
//         //spaces
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=0 ; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     //inverted full pyramid
//     for(int i=0; i<n; i++){
//         //spaces
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=0; j<n-i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     //hollow full pyramid
//     int n;
//     cin >> n;
    
//     for(int i=0; i<n; i++){
        
//         //spaces
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=0 ; j<i+1; j++){
//             if( i==0 || i==n-1 || j==0 || j==i){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main(){
//     //Inverted hollow pyramid
//     int n;
//     cin >> n;

//     for(int i=0; i<n; i++){
//         //spaces
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }

//         //stars
//         for(int j=0; j<n-i; j++){
//             if( i==0 || j==0 || i==n-1 || j==n-i-1){
//                 cout << "* ";
//             }
//             else{
//                  cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

int main(){
    //hollow full pyramid
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        //stars
        for(int j=0 ; j<i+1; j++){
            if( i==0 || /* i==n-1 || */  j==0 || j==i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    //Inverted hollow pyramid
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }

        //stars
        for(int j=0; j<n-i; j++){
            if( /* i==0 || */ j==0 || i==n-1 || j==n-i-1){
                cout << "* ";
            }
            else{
                 cout << "  ";
            }
        }
        cout << endl;
    }
}