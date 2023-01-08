#include <iostream>
using namespace std;

int add( int, int );

int main(){
    int sum;
    sum = add(1,1);
    cout << "Sum is " << sum << endl;
        
        return 0;
};

int add (int i, int j ){ // you will fill in this function
        int mysum;
        mysum = i + j;
#ifdef DEBUG
        cout << "mysum is " << mysum << " at this point\n";
#endif

return mysum;
}