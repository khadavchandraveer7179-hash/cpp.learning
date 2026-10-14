#include<iostream>
using namespace std ;

void changearr(int arr [] , int size ){

    for ( int i = 0 ; i < size ; i ++){

        arr[i] = arr[i]*3;

    }
}

int main (){

     int arr [] = { 7,5,34};
     int size = 3 ; 
    
     changearr(arr , 3);
 
     for (int i =0 ; i < 3 ; i++){

        cout << arr[i] << "  ";
     }
     cout << endl;

 return 0 ;
 }