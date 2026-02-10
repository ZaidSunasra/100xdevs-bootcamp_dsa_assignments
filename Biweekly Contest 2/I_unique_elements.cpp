#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    int unique_count = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j = 0; j <n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            unique_count++;
            cout << arr[i] << " ";
        }
    }

    if(unique_count == 0){
        cout << endl;
    }
    
}