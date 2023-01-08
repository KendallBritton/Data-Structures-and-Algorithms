#include <iostream>
using namespace std ;

void swap(string *x, string *y){
    string temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

void bubble_sort ( string data[] , int len ) {


    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(data[i] < data[j]){
                swap(&data[i],&data[j]);
            }
        }
    }




    return ;
}
