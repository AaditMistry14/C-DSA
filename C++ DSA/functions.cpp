#include<iostream>

using namespace std;

// even odd
// 1 -> Even
// 0 -> Odd
// bool isEven(int a){

// if(a & 1){
//     return 0;
// }
// else{
// return 1;
// }

// }

// nCr = factorial(n) / factorial(r) * factorial( n - r)


// int factorial(int n){

// int fact = 1;

// for(int i = 1; i <= n; i++){

// fact = fact * i;

// }
// return fact;

// }
// int nCr(int n, int r){

//     int numerator = factorial(n);

//     int denominator = factorial(r) * factorial(n - r);

//     int ans = numerator / denominator;

//     return ans;

// }

//Counting

void printCounting(int n){

    for(int i = 1; i <= n; i++)
    cout << i << endl;

}

int main(){

// even odd
// int num;
// cin >> num;

// if (isEven(num)){
//     cout << "Number is even" << endl;
// }
// else{
//     cout << "Number is Odd" << endl;
// }


// nCr

// int n, r;

// cin >> n >> r;

// cout << "Answer is: " << nCr(n,r) << endl;

    
    int n;
    cin >> n;
    printCounting(n);

    
    return 0;
}