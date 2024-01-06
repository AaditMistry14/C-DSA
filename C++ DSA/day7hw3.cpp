#include<iostream>

using namespace std;

void fibonacciSeries(int n){

    int a = 0, b = 1;
    cout << a << " " << b << " ";

 
    for(int i = 2; i <= n; i++){

       int temp = a + b;

       a = b;
       b = temp;

       cout << temp << " ";

    }
}

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    fibonacciSeries(num);
    
    return 0;
}