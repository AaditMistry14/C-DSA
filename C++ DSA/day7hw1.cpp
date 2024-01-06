#include<iostream>

using namespace std;


int calcAp(int n){

int ap = (3 * n + 7);

return ap;

}
int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    int ans = calcAp(n);

    cout << "answer is : " << ans <<endl;


    return 0;
}