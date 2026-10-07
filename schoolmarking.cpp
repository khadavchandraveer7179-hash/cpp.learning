#include <iostream>
using namespace std;

int main(){
 
    int physics,chemistry,maths,computer,socialscience; 
    int marks ;

    float percentage;  

       cout<<"entered physics marks ="<<endl;
       cin>>physics;
     
       cout<<"entered chemistry marks ="<<endl;
       cin>>chemistry;

         cout<<"entered maths marks ="<<endl;
         cin>>maths;

          cout<<"entered computer marks ="<<endl;
          cin>>computer;

             cout<<"entered social science marks ="<<endl;
             cin>>socialscience;

             int total = physics + chemistry + maths + computer + socialscience;

              (percentage = total/5);

              cout<<"total="<<total<<endl;
              cout<<"percentage ="<<percentage<<"%"<<endl;

             if(percentage>=90){
             cout<<"A GRADE"<<endl;
            } 
             else {
             cout<<"B GRADE"<<endl;
            }
 return 0;
} 






  