#include<iostream>
using namespace std;

void solve(){

    long long L, R;
    cin >> L >> R;

    cout << (R * (R+1)/2) - ((L-1) * (L) / 2) << endl;
}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        solve();
    }
}