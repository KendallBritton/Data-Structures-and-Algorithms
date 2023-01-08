#include <iostream>
using namespace std ;
// Name: Kendall Britton
// Student ID: 801045864

int removal ( int data[] , int len ) {
    int j = 0;
    
    for(int i = 0; i < len-1; i++){
        if(data[i] != data[i+1]){
            data[j++] = data[i];
        }
    }
    
 data[j++] = data[len-1];

    

return j;
}

int main ( ) {
    // Professor will change this line to test other inputs
    int     data[] = { 2, 2, 2, 3, 3, 4, 5, 6 } ;
    int     i, len ;

    len = removal(data,8) ;
    for( i=0 ; i<len ; i++ )
        cout << "data[" << i << "]=" << data[i] << endl ;
    return 0 ;
}
