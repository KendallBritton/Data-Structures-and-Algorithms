#include <iostream>
using namespace std ;

int trap ( int n ) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int k = 0; k < n; k++){
        for(int x = 0; x < n; x++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

     for(int i = n-1; i > 0; i--){
         for(int s = 0; s < n - i; s++){
             cout << " ";
         }
         for(int j = 0; j < i; j++){
             cout << "*";
         }
         cout << endl;
     }






}
int main ( ) {
    // leave this code unchanged
    int width ;

    cin >> width ;
    trap(width) ;
    return 0 ;
}
