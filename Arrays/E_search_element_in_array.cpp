#include<iostream>
using namespace std;

int main() {

    int n, to_search;
    bool element_found = false;
    cin >> n >> to_search;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i < n; i++){
        if(arr[i] == to_search){
            cout << "YES";
            element_found = true;
            break;
        }
    }

    if(!element_found){
        cout << "NO";
    }

}