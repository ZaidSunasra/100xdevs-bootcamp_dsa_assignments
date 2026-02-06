#include<iostream>
#include <limits.h>
using namespace std;

void solve(){

    int n, target, count = 0;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> target;

    for(int i=0; i<n; i++){
        int current_element = arr[i];
        for(int j=0; j<n; j++){
            if(i == j ){
                continue;
            }
            for(int k = 0; k < n; k++){
                if( j == k || i == k){
                    continue;
                }
                if(arr[j] + arr[i] + arr[k] == target){
                    count++;
                }
            }
        }
    }

    cout << count / 6;

    cout << endl;

}

int main() {

    int test_cases;
    cin >> test_cases;

    for(int i=0; i<test_cases; i++){
        solve();
    }

}