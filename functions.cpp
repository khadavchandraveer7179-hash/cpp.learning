#include<iostream>
using namespace std ; 

//sum of two number 
int sum (int a,int b){
    int sum = a+b;
    return sum;
}
    //multiplication of two number 
    int multi ( int c , int d ){
      int multi = c*d;
      return multi ;

    }
        //min of two number 
        int minofnum(int a , int b){
            if (a<b){
              return a;

            }else {
              return b;
            }
           
        }
           //sum of numbers from 1 to n 
               int sumtilln(int n ){
            
               int sum=0;

               for (int i = 1 ;i<=n;i++){
                   sum+=i;
               }
                return sum;
        }
           //factorial of n 
                     int factorial(int n){
                       int fact = 1;

                      for (int i =1 ; i <=n;i++){
                
                       fact *=i;
                       }return fact ;
               
                    }

                        int sumn (int a, int b ){
                        return a+b;
                      }
        
                        int main(){
                          int x=  4 ,y= 6 ;
                         cout <<"sum of two numbers == "<<sum(600,900)<<endl;
                         cout <<"multiplication of two numbers == "<<multi(13345,5674)<<endl;
                         cout <<"minimum of two number == "<<minofnum(2632,7125)<<endl;
                         cout <<"sum from 1 to n == "<<sumtilln(50)<<endl;
                         cout <<"factorial of n ===  "<<factorial(5)<<endl;
                         cout <<sumn (x,y )<<endl;
 } 
