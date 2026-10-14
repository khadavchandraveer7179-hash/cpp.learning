#include<iostream>
using namespace std ;

void reverseanARRAY(int arr[] , int size ){

     int start = 0 , end = size - 1 ;

    while ( start < end ){

        swap (arr[start] , arr[end] );
        start ++ ; 
        end -- ;

    }
}

int main (){

     int arr [] = {3,5,2,7,8,9};
     int size = 6 ;

     reverseanARRAY(arr , size );
    
    for ( int i = 0 ; i < 6 ; i ++ ){

        cout << arr[i] << " " ;
    } 
     cout << endl;
 
 return 0 ;
 
}