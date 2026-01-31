#include <iostream>
using namespace std;

bool isPrime(int n){
    int factorCount = 0;
    for(int i=1; i <= n; i++){
        if(n % i == 0){
            factorCount++;
        }
    }
    return factorCount == 2;
}

int main() {

    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

}