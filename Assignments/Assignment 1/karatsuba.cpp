/* Karatsuba multiplication */
#include <iostream>
#include <cmath>

using namespace std;

int numDigits(int num);
int pow10(int n);



int karatsuba(int x, int y) {
  int a,b,c,d;  

  if ((x < 10) || (y < 10)){
      return x * y;
  }

// Splits up each set of numbers into two parts
  long long power = 1;
  a = x;
  b = 0;

    while(a >= power){
        long long r = a%10;

        a /= 10;
        b += r*power;

        power *= 10;
    }

  c = y;
  d = 0;
  power = 1;

    while(c >= power){
        long long r = c%10;

        c /= 10;
        d += r*power;

        power *= 10;
    }

    
// Intermediate calculations from Karatsuba method
  int ac, bd, a_bc_d,f;

  ac = a * c;
  bd = b * d;
  a_bc_d = ((a + b) * (c + d));
  f = a_bc_d - bd - ac;

  

  //Power of ten expansion
  int ac_expan = ac * pow10(numDigits(x));
  int f_expan = f * pow10((numDigits(x)/2));

  

  if((numDigits(x) % 2 == 1) || (numDigits(y) % 2 == 1)){
     ac_expan = ac * pow10(numDigits(x) + 1);
     f_expan = f * pow10(numDigits(x)-1);
  }

  int ans = ac_expan + bd + f_expan;
    
   return ans;
}

// Helper function - returns number of digits
int numDigits(int num) {
    int counter = 0;
    while(num != 0){
        num = num / 10;
        counter++;
    }
    return counter;
}

// Helper function - integer exponentiation
int pow10(int n) {
    int k = 1;
    if(n == 0){
        k = 1;
        return k;
    } else{

        int i = 0;
    while (i != n)
    {
        k = k * 10;
        i++;
    }
}
   return k; 
}
