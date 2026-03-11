#include<iostream>
#include<cmath>
using namespace std;

int main(){

    long long n;
    cin >> n;

    bool isPrime = true;

    if(n == 1){
        isPrime = false;
    }

    for(int i=2; i <= sqrt(n); i++){
        if( n % i == 0){
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << "YES" : cout << "NO";
}