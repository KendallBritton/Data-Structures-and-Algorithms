#include <iostream>
using namespace std ;

class node {
  public:
    string  data ;
    node    *next ;
} ;

node *head ;

void add ( string data ) {
    node    *curr, *tmp ;

    tmp = new node() ;
    tmp->data = data ;
    tmp->next = NULL ;

    if( head==NULL ) {
        head = tmp ;
    } else {
        curr = head ;
        while( curr->next!=NULL )
            curr = curr->next ;
        curr->next = tmp ;
    }
}

void print ( ) {
    node    *curr ;

    curr = head ;
    while( curr!=NULL ) {
        cout << curr->data << endl ;
        curr = curr->next ;
    }
}

int main ( ) {

    head = NULL ;
    cout << "Empty list..." << endl ;
    print() ;
    add("alpha") ;
    add("beta") ;
    add("gamma") ;
    cout << "Three-element list..." << endl ;
    print() ;
    add("delta") ;
    cout << "Four-element list..." << endl ;
    print() ;

    return 0 ;
}