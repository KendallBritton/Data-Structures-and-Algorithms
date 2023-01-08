#include <iostream>
#include <fstream>
#include <assert.h>
#include "cbreak.cpp"
using namespace std ;

class bookentry {
  public:
    string  item ;
    int     num ;
} ;

bookentry   today[] = {
    {"apples", 5},
    {"apples", 2},
    {"apples", 2},
    {"bananas", 8},
    {"bananas", 6},
    {"kiwi", 1},
    {"pears", 2},
    {"pears", 1},
} ;

extern void bubble_sort ( string data[] , int len ) ;
extern void select_sort ( string data[] , int len ) ;
extern void quicksort ( string data[] , int len ) ;

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


int main ( int argc, char *argv[] ) {
    string      items[500] ;
    int         count ;

    assert(argc==2) ;
    count = read_input(today[],argv[1]) ;
    //bubble_sort(items,count) ;
     select_sort(items,count) ;
    // quicksort(items,count) ;
    write_output(today[],count) ;
    return 0 ;
}