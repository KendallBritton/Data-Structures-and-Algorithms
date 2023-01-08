#include <iostream>
#include <cmath>
using namespace std ;
// Name: Kendall Britton
// Student ID: 801045864

int readvec ( double data[] , int max ) {
    int tot ;

    tot = 0 ;
    cin >> data[tot] ;
    while( !cin.eof() && tot<max) {
        tot++ ;
        cin >> data[tot] ;
    }
    return tot ;
}

double  avg ( double data[] , int len ) {
    double average = 0;

    for(int i = 0; i < len; i++){
        average = average + data[i];
    }

    average = average/len;


return average;
}

double  stddev ( double data[] , int len ) {

    double average,totDiff,answer,x;
    totDiff = 0;
    average = avg(data,len);
    answer = 0;

    for(int i = 0; i < len; i++){
        x = pow((data[i] - average),2);
        totDiff = totDiff + x;
    }

    answer = totDiff/len;
    answer = sqrt(answer);

    return answer;

}

int main ( ) {
    int     i, size ;
    double  data[1000];

    size = readvec(data,1000) ;
    cout << "-----------" << endl ;
    cout << "avg:    " << avg(data,size)  << endl ;
    cout << "stddev: " << stddev(data,size)  << endl ;
    return 0 ;
}
