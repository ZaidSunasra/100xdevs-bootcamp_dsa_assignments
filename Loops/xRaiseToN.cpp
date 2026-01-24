#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int x, n;
    cin >> x >> n;

    if(n == 0){
        cout << 1;
        return 0;
    }
    if(x == 0){
        cout << 0;
        return 0;
    }

    long long power = 1;

    for(int i=0; i < n; i++){
        power = power * x;
    }

    cout << power;

}