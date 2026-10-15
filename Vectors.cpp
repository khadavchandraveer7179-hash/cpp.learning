#include<iostream>
#include<vector>
using namespace std ;

int main (){

      vector<int>vec;

      cout << " Intial Size of vector  == " << vec.size() << endl;

      vec.push_back(25);  // TO add value in vector 
      vec.push_back(2);
      vec.push_back(5);
      vec.push_back(6);
      vec.push_back(8);
      cout << "After pushing back the size of vector  === " << vec.size () << endl;
      cout << "After pushing back the capacity of vector === " << vec.capacity() << endl;
      
      vec.pop_back();  // TO delete value in vector --> dont neccesary to give value it will delete last value  

      cout << "After pop back the size of vector  === " << vec.size() << endl;
      cout << "After pop back the capacity of vector  === " << vec.capacity() << endl;
      

      for (int val : vec){  // Its called for each loop 

        cout << val << endl;
     }

return 0;      
}