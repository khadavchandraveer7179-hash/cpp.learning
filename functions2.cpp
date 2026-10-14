#include<iostream>
using namespace sts;

   //pass by value type in functions 
 
     int changeX(int x){
     x=x*2;

     return x ;
    }

     int main(){

        int x = 5;
         cout <<" x=== "<<changeX(x)<<endl;   //it gonna be print the (10) because it is mention in changeX function that the ( x = x * 2 )

         cout <<"x == "<<x<<endl;  //it gonna print the (5) because it is in the main function
         return 0;
         }

         
