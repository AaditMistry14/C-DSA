#include<iostream>
#include<math.h>
using namespace std;

int main(){


// for removing binary of any decimal -> 10 = 1010
// int n;
// cin>>n;

// int ans = 0;
// int i = 0;
// while(n != 0){

//     int digit = n & 1;
//     ans = (digit * pow(10, i)) + ans;

//     n = n>>1;
//     i++;
// }
// cout<<"answer is : "<< ans <<endl;

// binary to decimal.

int num;
cout<<"Enter a number: ";
cin>> num;

int i = 0, ans = 0;
while(num != 0){

    int digit = num % 10;

    //if bit is 1 it will be add with 2^i eg 2^0 = 1
    if (digit == 1){
        ans = ans + pow(2,i);

    }

    num = num / 10;
    i++;

}
cout<< ans << endl;
return 0;
}