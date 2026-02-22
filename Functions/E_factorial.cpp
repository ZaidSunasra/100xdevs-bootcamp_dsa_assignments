#include<iostream>
using namespace std;

long long factorial(int n){

    long long factorial = 1;

   for(int i = 1; i <= n; i++){
    factorial *= i;
   }

   return factorial;
}

int main(){

    long long n;
    cin >> n;

   long long result  = factorial(n);

    cout << result ;

}