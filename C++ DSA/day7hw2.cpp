#include<iostream>

using namespace std;

int countOne(int a, int b){


int count = 0;


while((a && b) != 0){


    if ((a & 1)){
        count++;
    }

    if((b & 1)){
        count++;
    }

    a = a >> 1;
    b = b >> 1;

}
return count;
}

int main(){

int num1, num2;

cout << "Enter number 1: ";
cin >> num1;

cout << "Enter number 2: ";
cin >> num2;

int ones  = countOne(num1, num2);

cout << "total number of one are: " << ones << endl;

return 0;

}