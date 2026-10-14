#include<iostream>
using namespace std;
    

    int digitsum(int num ){
        int digitsum = 0;

        while (num>0){

            int lastdigit = num%10 ;
            num /=10;
            digitsum +=lastdigit;

           
        } return digitsum;
    }
     
     int main(){

        cout<<"sum of all digits present in number == " <<digitsum(12345)<<endl;
     }

