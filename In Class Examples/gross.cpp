#include <iostream>
using namespace std;

int main(){

int x = 0;
int gross = 144;

    for(int i = 0; i < 4*gross;i++){
        if((i % 10 == 0) && (i % 12 == 0)){
            cout << i << " ";
            x++;
        }
    }

   
   cout << endl;
   cout << "There are " << x << " total numbers." << endl;
    return 0;
}