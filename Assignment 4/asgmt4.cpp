#include <iostream>
#include <fstream>
#include <assert.h>
using namespace std ;

extern void bubble_sort ( string data[] , int len ) ;
extern void select_sort ( string data[] , int len ) ;
extern void quicksort ( string data[] , int len ) ;

int read_input ( string data[] , const char *fn ) {
    ifstream    input;
    int         tot ;

    input.open(fn) ;
    assert(input.is_open()) ;
    tot = 0 ;
    input >> data[tot] ;
    while( !input.eof() ) {
        tot++ ;
        input >> data[tot] ;
    }
    input.close() ;
    return tot ;
}

void write_output ( string data[] , int total ) {
    int         i ;

    for( i=0 ; i<total ; i++ ) {
        cout << "Item " << i << " " << data[i] << endl ;
    }
    return ;
}

int main ( int argc, char *argv[] ) {
    string      items[500] ;
    int         count ;

    assert(argc==2) ;
    count = read_input(items,argv[1]) ;
    //bubble_sort(items,count) ;
     select_sort(items,count) ;
    // quicksort(items,count) ;
    write_output(items,count) ;
    return 0 ;
}
