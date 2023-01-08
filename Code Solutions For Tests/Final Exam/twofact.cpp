#include <iostream>
using namespace std;

// Name: Kendall Britton
// Student ID: 801045864
// Factorial Recursive Problem

int fact(int n){
    int output;

    if((n == 0) || (n == 1)){
        
        return 1;
    } else if (n > 1){
        output = n * (2 * (fact(n-1)));
    }
    return output;
}

int main(){

int lineNum = 5; // Determines how many lines

for(int i = 0; i < lineNum; i++){ 
    cout << "n = " << i << ": " << fact(i) << endl;
}


return 0;
}