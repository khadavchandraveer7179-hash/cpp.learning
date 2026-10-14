#include<iostream>
using namespace std;

    bool isprime (int n){
        
        bool prime = true; 

        for(int i=2;i<n;i++){
           
           if (n%i==0){
            prime = false;
            break;
           }
        }
        if (prime){
            return true;
        }
        else{
            return false;
        }
    }

    int primesum(int n){

         int primesum =0;

         for(int i=2;i<n;i++){
        
        

        if (isprime(i)){
        primesum += i;
        
      
        }  
        
    }
    return primesum;
    }

    int main(){
        cout <<"sum of prime number == "<<primesum(9)<<endl;

    }

  