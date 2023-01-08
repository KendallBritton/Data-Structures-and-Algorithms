#include <iostream>
using namespace std;

void check( int i){
    if(((i % 5) != 0) && ((i % 3) != 0)){
            cout << i;
        } else if(((i % 5) == 0) && ((i % 3) == 0)){
            cout << "Fizzbuzz";
        } else if((i % 3) == 0){
                cout << "Fizz";
        } else if((i % 5) == 0){
            cout << "Buzz";
        }
}

int main(){

    check(1);
    for(int i = 2; i <= 50; i++){
        cout << ", ";
        check(i);
    }



    return 0;
}