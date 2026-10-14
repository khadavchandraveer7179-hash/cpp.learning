#include<iostream>
using namespace std;

int main(){

        int a = 6 , b = 10;

         cout << (a&b) <<endl; //   & ( AND ) 1&1 = 1, 1&0=0
       
         cout << (a|b) <<endl; //   | ( OR )   1|1=1 , 1|0=1 , 0|0 = 0

         cout << (a^b) <<endl; //   ^ ( XOR )  same bit  0^0=0 , 1^1=0 , diff bit  0^1=1

         cout << (10 << 2) << endl;  // (10) == 1010 binary  , so << ( left shift ) shift the value by n like 1010 ---->  101000

         cout << (10 >> 1) << endl; // it will gonna be shift the value  right by n  , like 1010 -----> 0101

return 0;
}