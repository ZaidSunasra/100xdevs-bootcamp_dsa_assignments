#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min_element = arr[0];
    int index = 1;

    for(int i=0; i < n; i++){
        if(min_element > arr[i]){
            min_element = arr[i];
            index = i + 1;
        }
    }

    cout << min_element << " " << index;

}