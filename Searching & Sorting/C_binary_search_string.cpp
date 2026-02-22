#include <iostream>
using namespace std;

int main() {

    int n;
    string target;

    cin >> n;

    string arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> target;

    int start = 0, end = n -1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            cout << "YES";
            return 0;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "NO";

}