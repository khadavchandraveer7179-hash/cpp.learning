#include<iostream>
using namespace std;

 int decTobinary(int decnum ){

     int ans = 0;  // binary number 
     int  power = 1 ; //It will increase like = 1-->10-->100-->1000-->...........

     while(decnum>0){

         int reminder = decnum %2;
         decnum /= 2;

         ans += (reminder*power);
         power *= 10;
     }
     return ans ; //It will be our binary form of a number ....
 }

 int main (){

     int decnum = 1;
      for (int i =1 ; i<=10;i++){
         cout << decTobinary(i)<<endl;

        }
    
 }