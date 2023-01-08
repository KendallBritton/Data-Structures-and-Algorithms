#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <assert.h>
using namespace std ;
// Name: Kendall Britton
// Student ID: 801045864
// Code operates based on the number of rows to get to specifc integer
int main ( int argc , char *argv[] ) {
    int     upto ;
    int n = 1;
    
    // insert additional variables here

    assert(argc==2) ;
    // first argument and converts to an integer
    
    upto = atoi(argv[1]) ;


    for(int i = 0; i < upto; i++){
    
        for(int j = 0; j <= i; j++,n++){
            cout << n << "     ";
        }

        cout << endl;
        


    }








    return 0 ;
}
