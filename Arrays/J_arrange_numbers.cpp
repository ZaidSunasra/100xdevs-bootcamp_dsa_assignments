#include<iostream>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int arr[n];
    int start = 0, end = n - 1;
    int current_number = 1;
    int is_odd = true;

    while(start <= end){
        if(is_odd){
            arr[start] = current_number++;
            start++;
            is_odd = false;
        } else {
            arr[end] = current_number++;
            end--;
            is_odd = true;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
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