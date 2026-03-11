#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){

    long long n, k;
    cin >> n >> k;

    int count = 0;

    for(int i=1; i <= sqrt(n); i++){
        if( n % i == 0){
            if(i == sqrt(n)){
                count++;
            } else {
                count += 2;
            }
        }
    }

    if(k > count){
        cout << -1;
        return 0;
    }

    int kthFactor = 0;

    for(int i=1; i <= sqrt(n); i++){
        if(n % i == 0){
            kthFactor++;
            if(kthFactor == k){
               cout << i;
               return 0;
            }
            if(count - kthFactor == k - 1){
                cout << n / i;
                return 0;
            }
        }
    }
}