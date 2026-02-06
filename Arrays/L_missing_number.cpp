#include<iostream>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int arr[n];

    int count = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
       int current_element = arr[i];
       count = 0;
       for(int i=0; i<n; i++){
        if(arr[i] == current_element){
            count++;
        }
       }
       if(count == 1){
        cout << current_element;
        break;
       }
    }

    cout << endl;

}

int main() {

    int test_cases;
    cin >> test_cases;

    for(int i=0; i<test_cases; i++){
        solve();
    }

}