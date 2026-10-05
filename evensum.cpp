#include <iostream>
using namespace std;
int main (){

int  n = 30 ;
int evensum = 0;
 
 for (int i = 1 ; i <= 30 ; i ++){

    if ( i % 2 ==0 ){
        evensum += i ;
    }

    }   cout <<" sum of all even numbers till 30 = "<< evensum << endl;


 
    return 0 ; 
} 