#include<iostream>
using namespace std;

void solve(){

    int T;
    long long L, R;
    cin >> T >> L >> R;

    if(L > R){
        cout << 0;
    } else if(L == R){
        if(T == 4){
            cout << 1;
        } else {
            cout << 0;
        }
    } else {
        if( T == 1){
            cout << R - L - 1;
        } else if (T == 4){
            cout << R - L + 1;
        } else {
            cout << R - L;
        }
    }

    cout << endl;   
}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        solve();
    }
}