#include <iostream>
using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int arr1[n];
    int arr2[m];
    int result[n+m];

    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    int i=0, j=0, k=0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < n){
        result[k] = arr1[i];
        i++;
        k++;
    }

    while(j<m){
        result[k] = arr2[j];
        j++;
        k++;
    }

    for(int i=0; i<n+m; i++){
        cout << result[i] << " ";
    }


}