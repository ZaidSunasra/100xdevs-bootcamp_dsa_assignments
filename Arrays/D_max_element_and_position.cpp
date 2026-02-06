#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max_element = arr[0];
    int index = 1;

    for(int i=0; i < n; i++){
        if(max_element < arr[i]){
            max_element = arr[i];
            index = i + 1;
        }
    }

    cout << max_element << " " << index;

}