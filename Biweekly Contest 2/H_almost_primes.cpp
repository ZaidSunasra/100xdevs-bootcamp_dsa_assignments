#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int factor_count = 0;
        for(int j=1; j<=i; j++){
            if( i % j == 0){
                factor_count++;
            }
        }
        if(factor_count <= 4){
            cout << i << " ";
        }
    }
    
}