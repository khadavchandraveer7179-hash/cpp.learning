#include <iostream>
using namespace std ; 
int main () { 

 int amount ;
   int balance ;
    int choice ;
      int pin ;

     cout <<"welcome to the sbi atm  "<<endl;
     cout << "enter your four  digit pin ="<<endl; 
     cin >>  pin ;
      
        
        if ( pin == 2020 ){
            cout <<" wlecome (1) "<< endl;
         balance = 90000 ;
         cout << "pin is correct "<<endl;
             
         cout << " procced next " << endl;
        }
        else if ( pin == 3030 ){
            cout << " welcome (2)"<<endl;

            balance = 100000 ;
            cout <<" pin is correct "<< endl;

            cout << " procced next "<< endl;  


        }
        else if ( pin == 5050 ) {
            cout <<" welcome (3)"<<endl; 
            
            balance = 50000 ;
            cout <<"pin is correct  "<< endl; 

            cout <<" procced next "<< endl; 

        }
        else {
            cout <<" your pin is incorrect "<<endl;
             
        }

        while ( true ){
                 cout<<"1.choice check balance "<<endl;
                 cout<<"2.choice deposit "<<endl;
                 cout <<" 3.choice withdraw "<<endl ;
                 cout <<" 4.choice exit "<<endl;
                 cout <<" enter your choice = ";
                 cin>>choice;

        if (choice == 1 ){
                 cout <<" your balance = "<<balance <<endl; 


        }
        else if ( choice == 2 ){
                 cout << " your deposit money =";
                 cin >> amount ;
                 balance = balance + amount ;

                 cout <<" your new balance ="<< balance<< endl;
                
        }
        else if ( choice == 3 ){ 
                 if (amount < balance ){
                 cout <<"your  withdraw = ";
                 cin >> amount ;
            
                 balance = balance - amount ;
                 cout <<" your new balance = "<<balance ;
                 }
                 else {
                    cout <<" inssificent balance "<<endl;
                     
                 }
        }
        else {
            cout <<"exit "<<endl; 
             cout <<" visit again "<< endl;
               break;
        }
            
        }      
return 0 ;
}