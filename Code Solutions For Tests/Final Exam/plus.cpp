#include <iostream>
using namespace std;

// Name: Kendall Britton
// Student ID: 801045864
// Grid Plus Graphic Problem

void horiSpace(int n){ // n calculates the number of spaces in cell
    for(int i = 0; i < n; i++){
        cout << " ";
    }

    cout << "|";

    for(int i = 0; i < n; i++){
        cout << " ";
    }

    cout << endl;
}

void horiLine(int n){ // n calculates the number of dashes in line
    for(int i = 0; i < n; i++){
        cout << "-";
    }
    cout << "+";

    for(int i = 0; i < n; i++){
        cout << "-";
    }
    
    cout << endl;
}

int main(){

for(int i = 0; i < 5; i++){ // 5 is used to have the correct spaceing
    horiSpace(5);           // while maintaining the desired grid size
}

horiLine(5);

for(int i = 0; i < 5; i++){
    horiSpace(5);
}

return 0;
}