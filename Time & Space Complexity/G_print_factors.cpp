#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){

    long long n;
    cin >> n;

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

    vector<long long> factor(count);

    int start = 0, end = count - 1; 

    for(int i=1; i <= sqrt(n); i++){
        if(n % i == 0){
            factor[start] = i;
            factor[end] = n / i;
            start++;
            end--;
        }
    }

    for(auto i : factor){
        cout << i << " ";
    }
}