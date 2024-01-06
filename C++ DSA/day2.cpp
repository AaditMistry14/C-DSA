#include<iostream>
using namespace std;
int main(){
    // int age;
    // cout<<"Enter age\n";
    // cin>>age;
    // cout<<"Enter a value of b\n";
    // cin>>b;

    // if (a > b){
    //     cout<<"A is greater"<<endl ;
    // }
    // if (b > a){
    //     cout<<"B  is greater"<<endl;
    // }
    // if (a > 0){
    //     cout<<"a is positive"<<endl;
    // }
    // else{
    //     if (a < 0){
    //         cout<<"a is negative"<<endl;
    //     }
    //     else{
    //         cout<<"a is 0"<<endl;

    //     }        
    // }


    //IF ELSE-IF ELSE
    // if (a > 0){
    //     cout<<"a is positive"<<endl;
    // }
    // else if(a < 0){
    //     cout<<"a is negative"<<endl;
    // }
    // else{
    //     cout<<"a is zero"<<endl;
    // }

    // H.W
    // 1. int a = 9;
    // if(a == 9){
    //     cout<<"Niney"<<endl;
    // }

    // if(a > 0){
    //     cout<<"Positive"<<endl;
    // }
    // else{
    //     cout<<"Negative"<<endl;
    // }
    // 2. int a = 2;
    // int b = a + 1;

    // if((a=3) == b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a;
    // }
    //  3.int a = 24;
     
    // if(a > 20){
    //     cout<<"Love"<<endl;
    // } 
    // else if(a == 24){
    //     cout<<"Lovely"<<endl;
    // }
    // else{
    //     cout<<"Babbar"<<endl;
    // }
    // cout<<a<<endl;

//     char ch;
//     cout<<"Enter a character: ";
//     cin>>ch;

//     if (ch >= 'a' && ch <= 'z'){
//     cout << "Entered character is a Lowercase and the value is " << ch << endl; 
//   }
//   else if (ch >='A' && ch <= 'Z'){
//     cout << "Entered character is a Uppercase and the value is " << ch << endl; 
//   }
//   else {
//     cout << "Entered character is a Numeric and the value is " << ch << endl;
//   }

    // int n, i = 2, sum = 0;
    // cin>>n;
    // cout<<endl;

    // while(i <= n){
    //     sum = sum + i;
    //     i = i + 2;
    // }
    // cout<<"the sum is: "<< sum <<endl;

    //  Prime number 
    // choose i = 2 , as cannot start with 1 as prime number 
    // is divisible by 1 and itself so start with 2.
//    int n;
//    cin>>n;

//    int i = 2;

//    while (i < n)
//    {
//      if(n % i == 0){
//         cout<<"not prime for "<<i<<endl;
//      }
//      else{
//         cout<<"Prime for "<<i<<endl;
//      }
//      i = i + 1;
//    }
   

//    int n;
//    cin>>n;

//    int i = 1;//i = row

//    while(i <= n){
//     int j = 1;// j = col
//     while(j <= n){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }

//     int n;
//    cin>>n;
//     int i = 1;
//    while(i <= n){

//     int j = 1;
//     while(j <= n){
//         cout<<i;
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }

// 3. Hw ferenhit to celscius

    float celscius, ferenhit;
    cout<<"Enter value: ";
    cin>>ferenhit;

    celscius = (((ferenhit - 32) * 5) / 9);
    cout<<celscius<<" degree";

    return 0;
    
}