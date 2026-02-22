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

        int temp = arr[i];
        int j = i - 1;
        int shift = 0;

        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
            shift++;
        }

        arr[j+1] = temp;

        cout << "Pass " << i << ": ";
        for(int k = 0; k <n; k++){
            cout << arr[k] << " ";
        }
        cout << ", ";

        for(int k = 0; k <n; k++){
            cout << arr[k] << " ";
            if(k == i){
                cout << "| ";
            }
        }
        cout << ", shifts = " << shift << endl;

    }

}