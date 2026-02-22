#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){

        bool swapped = false;
        int swaps = 0;

        for(int j=0; j<n-i; j++){
            if(arr[j] >arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
                swaps++;
            }
        }

        cout << "Pass " << i << ": ";
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << ", swaps = " << swaps << endl;

        if(!swapped){
            break;
        }

    }

}