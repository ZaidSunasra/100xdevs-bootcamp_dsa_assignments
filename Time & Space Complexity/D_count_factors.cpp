#include<iostream>
#include<cmath>
using namespace std;

int main(){

    long long n;
    cin >> n;

    long long count = 0;

    for(int i=1; i <= sqrt(n); i++){
        if( n % i == 0){
            if(i == sqrt(n)){
                count++;
            } else {
                count += 2;
            }
        }
    }

    cout << count;
}