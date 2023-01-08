#include <iostream>

using namespace std;

typedef long long bigint;

bigint fact(bigint n){
    bigint returnValue;
    if (n == 0){
        returnValue = 1;
    } else {
        returnValue = n * (fact(n-1));
    }
    return returnValue;
};

int main(){
    bigint inp;
    bigint ans;

    cout << "Enter an integer: ";
    cin >> inp;

    ans = fact(inp);
    cout << inp << " factorial is " << ans << endl;

    return 0;
}