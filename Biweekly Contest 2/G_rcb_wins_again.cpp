#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int left_mid = n/2 -1;
    int right_mid = n/2;
    int count = 0;

    while (count < n)
    {
        cout << arr[left_mid] << " ";
        cout << arr[right_mid] << " ";
        left_mid--;
        right_mid++;
        count += 2;
    }
    
}