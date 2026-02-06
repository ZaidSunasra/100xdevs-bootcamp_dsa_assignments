#include<iostream>
using namespace std;

int main() {

    int n;
    bool is_sorted= true;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i < n; i++){
        if(arr[i] < arr[i-1]){
            is_sorted = false;
            break;
        }
    }

    if(is_sorted){
        cout << "YES";
    } else {
        cout << "NO";
    }

}