#include<iostream>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int count_0 = 0, count_1 = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            count_0++;
        } else {
            count_1++;
        }
    }

    for(int i=1; i<=count_0; i++){
        cout << "0 ";
    }

    for(int i=1; i<=count_1; i++){
        cout << "1";
        if(i != count_1){
            cout << " ";
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