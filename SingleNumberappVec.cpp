#include<iostream>
#include<vector>
using namespace std ;

int findunique(vector<int>vec ){

     int ans = 0 ; 

    for (int val : vec){

      ans = ans^val;

    }
    return ans ;
}

int main(){

     vector<int>vec= {5,3,6,1,3,5,6};

     cout << findunique( vec ) << endl;
}
