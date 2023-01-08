#include <iostream>
#include <cmath>
using namespace std;

// Name: Kendall Britton
// Student ID: 801045864
// Quadratic Equation Problem

int main(){

int a,b,c;
int discriminant;
double squareRoot;

cout << "Enter values for a,b, and c." << endl;
cin >> a;
cin >> b;
cin >> c;

discriminant = ((pow(b,2)) - 4*a*c);

if(discriminant > 0){
    cout << "There are two real roots for this equation." << endl;
} else if(discriminant == 0){
    cout << "There is exactly one real root for this equation." << endl;
} else if(discriminant < 0){
    cout << "There are no real roots for this equation." << endl;
}

return 0;
}