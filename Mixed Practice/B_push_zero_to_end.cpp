#include <iostream>
using namespace std;

void solve(){

    int n; 
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int pos = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[pos], arr[i]);
            pos++;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
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