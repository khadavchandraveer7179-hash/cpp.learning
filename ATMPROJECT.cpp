#include<iostream>
using namespace std;
int main(){
    int balance = 9000;
    int amount; 
    int choice; 
     
     cout<<" choice.1 your balance rs ="<<endl;
    cout<<" choice.2 your deposit amount ="<<endl;
    cout<<"choice.3 your withdraw amount  ="<<endl;
    cout<<"choice.4 exit "<<endl;

    cin>>choice;

    if(choice == 1){
        cout<<"your balance = "<<balance<<endl;

    }
    else if (choice == 2){
        cout<<"your deposit amount =";
        cin>>amount;
        cout<<"your money has succesfullly deposit "<<endl;
        
        balance = balance + amount ;
        cout<<"new balance ="<<balance<<endl;

    }
    else if(choice == 3){
        cout<<"your withdraw money ="<<endl;
        cin>>amount;
        if(amount<balance){
            cout<<"withdraw succesfull "<<endl;
           
        }
        else if(amount>balance){
            cout<<"insfficent balance"<<endl;

        }
          balance = balance - amount;
            cout<<"new balance ="<<balance<<endl;

    }
    else if(choice == 4){
        cout<<"exit"<<endl;

        
    }
    else{
        cout<<"thank you for your visit"<<endl;

    }
    return 0;


}
