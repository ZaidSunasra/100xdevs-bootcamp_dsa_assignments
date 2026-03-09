#include<iostream>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int index = 0;

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            index = i; 
        }
    }

    cout << index << endl;
}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n;i++){
        solve();
    }
}