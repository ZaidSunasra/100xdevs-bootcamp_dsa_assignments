#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int factor_count = 0;

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            if( i % 10 == 2 || i % 10 == 7 ){
                cout << i << " ";
                factor_count++;
            }
        }
    }

    if(factor_count == 0){
        cout << -1;
    }

}