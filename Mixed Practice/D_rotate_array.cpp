#include<iostream>
using namespace std;

void solve(){

    int n, rotations;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> rotations;

    for(int i = rotations; i<n; i++){
        cout << arr[i] << " ";
    }

    for(int i=0; i<rotations; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(){

    int n;
    cin >> n;
    
    for(int i=0; i<n;i++){
        solve();
    }
}