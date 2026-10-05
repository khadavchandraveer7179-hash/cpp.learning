
#include<iostream>
using namespace std;

int main(){

      int secert = 80 ;
      int guess ;

        cout <<" guess the secert =";  
        cin >> guess;

           while ( guess != secert ){

           if ( guess < secert ){
            cout <<" too low "<<endl;
             cin>>guess;
           }
           else {
            cout <<" too high "<<endl;
             cin>>guess;
           }
           }
           
           cout <<" you won "<<endl;
           
 return 0 ;
}   