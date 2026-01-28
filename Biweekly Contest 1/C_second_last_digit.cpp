#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int digit = 1;

    while(n){
        int rem = n % 10;
        n = n / 10;
        if(digit == 2){
            cout << rem;
            break;
        }
        digit++;
    }
    
}