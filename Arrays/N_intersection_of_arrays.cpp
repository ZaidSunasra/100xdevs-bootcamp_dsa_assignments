#include<iostream>
#include <limits.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int arr1[n];

    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int arr2[m];

    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    for(int i=0; i<n; i++){
        int current_element = arr1[i];
        for(int j=0; j<m; j++){
            if(arr2[j] == current_element){
                cout << current_element << " ";
                arr2[j] = INT_MIN;
                break;
            }
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