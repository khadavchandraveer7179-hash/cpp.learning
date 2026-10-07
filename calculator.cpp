#include<iostream>
using namespace std ;
int main(){

      
      int a , b ; 
      int choice ;
      int sum ;
      int multi;
      int diff ;
      int division;


       cout <<"enter the first number = ";
       cin>>a;

        cout <<"enter the second number= ";
       cin>>b ;

       cout <<"choice.1 you want to do sum = "<<endl;
       cout <<"choice.2 you want to do diff = "<<endl;
       cout <<"choice.3 you want to do division = "<<endl;
       cout <<"choice.3 you wanty to do multi = "<<endl;
       cin >>choice;
       
       if (choice == 1 ){
         
        cout <<"sum of numbers is =  "<<a + b<< endl;

       }else if (choice == 2){
        cout <<"diff of numbers is = "<<a-b<<endl;

       }else if (choice == 4 ){
        cout <<"multiplication of numbers is =  "<<a*b<<endl; 
       
       }else if(choice == 3 ){
           
           if (b != 0 ){
            cout <<" division of two numbers is = "<<a/b<<endl;

           }else {
            cout << "no solution "<<endl;

           }
           }else{
            cout <<"invalid sign "<<endl;

           }
       
      return 0;
}