#include <iostream>
#include <iomanip>
using namespace std ;

class bookentry {
  public:
    bookentry array[];
    string  item ;
    int     num ;
    bookentry();
    bookentry(string item, int num);
} ;



void swap(bookentry *x, bookentry *y){
    bookentry temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

void bubble_sort ( bookentry data[] , int len ) {
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(data[i] < data[j]){
                swap(&data[i],&data[j]);
            }
        }
    }

    return ;
}

void select_sort ( bookentry data[] , int len ) {
    int minVal;
    for(int i = len - 1; i > 0; i--){
        minVal = 0;

        for(int j = 1; j <= i; j++){
            if(data[j] > data[minVal]){
                minVal = j;
                
            }
            swap(&data[minVal],&data[i]);
        }
    }
    return ;
}


void breaker1(){
    cout << "=========================" << endl;
}

void subBreaker(int i){
    cout << "-------------------------" << endl;
    cout << "SUBTOTAL " << i << endl;
}

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

int main ( ) {
    int     i ;
    int     len = (sizeof today)/sizeof(bookentry) ;

    bubble_sort(today[],len);

    for( i=0 ; i<len ; i++ ) {
        
        cout << setw(20) << left << today[i].item ;
        cout << setw(5) << right << today[i].num << endl ;
    }
    return 0 ;
}
