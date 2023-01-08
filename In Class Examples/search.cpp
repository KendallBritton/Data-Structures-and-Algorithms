#include <iostream>
using namespace std;

bool search ( int A[], int n, int T){
    bool rc;
    int i;

    rc = false;
    for(i = 0; i<n; i++){
        if(A[i] == T){
            rc = true;
            break;
        }
    }
    return rc;
}

int main(){
    bool result;
    int A[] = {1, 2, 3, 4, 6, 7, 8};
    int n = (sizeof A)/sizeof (int);

    result = search(A,n,5);
    if(result){
        cout << "found!" << endl;
    } else{
        cout << "not found" << endl;
    }

    return 0;
}