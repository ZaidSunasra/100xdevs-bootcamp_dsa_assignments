#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    long long total_sum = 0, diagonal_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            total_sum += arr[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        diagonal_sum += arr[i][i];
    }

    int i=0, j = n-1;
    while (i < n && j>= 0)
    {
        if(i == n/2 && n % 2 == 1){
            i++;
            j--;
            continue;
        }
        diagonal_sum += arr[i][j];
        i++;
        j--;
    }

    cout << diagonal_sum << " " << total_sum - diagonal_sum;
    
}