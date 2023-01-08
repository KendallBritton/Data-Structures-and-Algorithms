#include <iostream>
#include <assert.h>
#include <bits/stdc++.h>
using namespace std ;

#define MAXGRADE    10
#define MINGRADE    0
#define NUMGRADES   ((sizeof grades)/sizeof(int))
int grades[] = { 5, 8, 7, 8, 6, 10, 6, 8, 9, 10, 8, 3, 5 } ;

int main ( ) {
    int count[NUMGRADES];
    int n = 0;
    int z = 0;

    

    sort(grades,grades+NUMGRADES);


    for(int i = 0; i < NUMGRADES; i++){
        int counter = 0;
        for(int j = 0; j < NUMGRADES;j++){
            if(n == grades[j]){
                counter = counter + 1;
            } 
        }
        count[i] = counter;
        n++;
        
    }

    for(int i = 0; i <= MAXGRADE; i++){
        
     cout << "Grade: " << z << " Count: " << count[z] << endl;
     z++;
    }


    return 0 ;
}