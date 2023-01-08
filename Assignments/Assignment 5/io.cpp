#include <iostream>
#include <fstream>
#include <assert.h>
#include "cbreak.h"
using namespace std ;

int read_input ( bookentry data[] , const char *fn ) {
    ifstream    input;
    int         tot ;
    string      item ;
    int         num ;

    input.open(fn) ;
    assert(input.is_open()) ;
    tot = 0 ;
    input >> item >> num ;
    data[tot] = bookentry(item,num) ;
    while( !input.eof() ) {
        tot++ ;
        input >> item >> num ;
        data[tot] = bookentry(item,num) ;
    }
    input.close() ;
    return tot ;
}

void write_output ( bookentry data[] , int total ) {
    int         i ;

    for( i=0 ; i<total ; i++ ) {
        cout << "Item " << i << " " << data[i].item
             << " " << data[i].num << endl ;
    }
    return ;
}

