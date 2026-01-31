#include <iostream>
using namespace std;

int factorial(int n){
    int factorial = 1;
    for(int i=1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {

    int n , r;
    cin >> n >> r;
    
    int factorialN = factorial(n);
    int factorialR = factorial(r);
    int factorialNR = factorial(n-r);

    cout << factorialN / (factorialNR * factorialR);

}