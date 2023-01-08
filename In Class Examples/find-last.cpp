#include <iostream>
using namespace std;

int input[] = { 100, 4, 10, 99, 200, 11, 11, 150, 5, 6 } ;
#define NUMINPUTS   ((sizeof input)/sizeof(int))


int main ( ) {

    int searchVal,placement;
    bool match;

    cout << "Enter the search value: " << endl;
    cin >> searchVal;

    for(int i = NUMINPUTS - 1; i >= 0; i--){
        placement = i;
        if(searchVal == input[i]){
            match = 1;
        } else{
            match = 0;
        }

        if(match == 1){
            cout << "The number " << searchVal << " was found in the list at position " << placement << "." << endl;
            break;
        }
    }

    if(match == 0){
        cout << "The number does not appear in the list." << endl;
    }




    return 0 ;
}
