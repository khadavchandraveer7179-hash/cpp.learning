#include<iostream>
using namespace std ; 

void changeinarray(int array[] , int size ){

     int smallest = 0 ;
     int largest = 0 ; 

     for ( int i = 0 ; i < size ; i ++){

        if (array[i] < array[smallest]){

            smallest = i  ;
        }
         if ( array[i] > array[largest]){

            largest = i ;
        }
     }
     swap (array[largest] , array[smallest]);

}

int main(){

       int array[] = {41,77,93,69,29};
       int size = 5 ; 

         changeinarray(array , 5 );

        for ( int i = 0 ; i < size ; i ++){

         cout << array[i] << " ";
        } 
        
         cout << endl;

return 0 ;
}