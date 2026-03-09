#include<iostream>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    if(sum == 7){
        cout << "Thala for a reason" << endl;
    } else {
        cout << "Blocked for no reason" << endl;
    }
}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        solve();
    }
}