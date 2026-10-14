#include<iostream>
using namespace std ;

int main(){
     int smallest = INT_MAX ;
     int largest = INT_MIN ;

     int nums [] = {4,5,62,8,9,-8};
     int size = 6 ;

     for ( int i = 0 ; i < 6 ; i ++ ){

        if (nums[i] < smallest){

            smallest = nums[i];
        }
        else if ( nums[i] > largest ){

            largest = nums[i] ;
        }
       
     }

     cout << "largest array == " << largest << endl;
     cout << "smalllest array == " << smallest << endl;
     
     return 0;
 }
