#include<iostream>
using namespace std;

int main(){
  
  int n = 5 ;
  int oddsum = 0 ;
// only odd numbers till 5 
  for(int i = 1 ; i <= n ; i ++ ){
    
    if(i%2 != 0 ){
      cout << i <<endl;
      oddsum +=i ; 
    }
    
  }

   cout << "odd sum til 5 =  "<< oddsum <<endl; 
    
    return 0; 
} 