#include <iostream>
using namespace std ;

void swap(string *x, string *y){
    string temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

void select_sort ( string data[] , int len ) {

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
