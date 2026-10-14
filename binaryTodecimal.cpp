#include<iostream>
using namespace std;

int binTodec(int binaryNum){

     int ans = 0;  //decimal number 
     int power = 1; // It will be inc like == 1---> 2 ---> 4---> 8.............

     while (binaryNum>0){

         int reminder = binaryNum%10;
         binaryNum /= 10;

            ans += (reminder*power);
            power *= 2;
     }

     return ans ; //It will be our decimal form of binary .....
}

int main(){

       cout<< binTodec(101101)<<endl; 
     
      }
