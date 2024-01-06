// switch case and functions

#include<iostream>

using namespace std;

// function

int power(){
    

    int a , b;
    cin >> a >> b;
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    return ans;

}

int main(){

    // char ch = '1';
    // int num = 1;

    // switch( ch ){
    //     case 1: cout <<"First "<< endl;
    //     break;
    //     case '1':switch( num ){
    //         case 1: cout<< "value of num is : "<< num << endl;
    //         break;

    //     cout<< "case one "<< endl;
    //     }
    //     break;
    //     default: cout<< "It is a default case"<<endl;

    // }

    // int a, b;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;

    // char op;
    // cout<< "Enter the Operation to perform: "<< endl;
    // cin>>op;

    // switch(op){
    //     case '+': cout << (a + b) << endl;
    //     break;

    //     case '-': cout << (a - b) << endl;
    //     break;

    //     case '*': cout << (a * b) << endl;
    //     break;

    //     case '/': cout << (a / b) << endl;
    //     break;

    //     case '%': cout << (a % b) << endl;
    //     break;
         
    //     default: cout << "Please enter a valid number.";

    // }


                                // Functions
int ans = power();

cout << " value is : " << ans << endl;
    return 0;

}