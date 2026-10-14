#include<iostream>
using namespace std ;

int searchoftarget(int arr [] , int size ){

     int target =  8 ;
 
    for( int i = 0 ; i < size ; i ++){

        if (arr[i] == target ){ // value found 

            return i ;
       
         }
    }
    return -1 ; // when value not found 
}

int main (){
    
     int  arr[] = {3,6,5,2,8,6,2};
     int  size = 7 ;
 
     cout << searchoftarget(arr , 7) << endl;
    
}