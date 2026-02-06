#include<iostream>
using namespace std;

int main() {

    int n, to_count, count = 0;
    cin >> n >> to_count;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i < n; i++){
        if(arr[i] == to_count){
            count++;
        }
    }

    cout << count;

}