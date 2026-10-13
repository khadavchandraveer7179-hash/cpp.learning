#include <iostream >
using namespace std ;
int main(){

    int sum = 0 ;
    int n = 50 ;

    for (int i = 1 ; i <= 50 ; i ++){

        if ( i % 5 == 0 ){
            sum += i ;

        }
        
    }
    cout <<" sum of no from 1 to 50 which is divisible by 5 = "<<sum << endl;
     return 0 ; 
     
}