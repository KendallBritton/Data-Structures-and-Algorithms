#include <iostream>
#include <vector>

using namespace std;

int main(){
    int array1[] = {15,20,35,-1};
    int array2[] = {10,25,30,-1};
    int array3[20];
    int i, j, k;

    i = j = k = 0;
    while(array1[i] != -1 && array2[j] != -1){
        if(array1[i] < array2[j]){
            array3[k] = array1[i];
            k++;
            i++;
        } else {
            array3[k] = array2[j];
            k++;
            j++;
        }
        
    }

    while( array1[i] != -1){
        array3[k] = array1[i];
        k++;
        i++;
    }
    while (array2[j] != -1){
        array3[k] = array2[j];
        k++;
        j++;
    }
    array3[k] = -1;

    i = 0;
    while( array3[i] != -1){
        cout << array3[i] << " ";
        i++;
    }
    cout << endl;
    
    return 0;
}