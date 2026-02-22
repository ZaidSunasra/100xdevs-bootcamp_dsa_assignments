#include <iostream>
using namespace std;

int selectionSort(int n, int arr[]){

    int swaps = 0;

    for(int i=0; i<n; i++){
        int min = arr[i];
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }

        if(index != i){
            swaps++;
            swap(arr[i], arr[index]);
        }

    }

    return swaps;
}

int insertionSort(int n, int arr[]){

    int shifts = 0;

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--; 
            shifts++;
        }
        arr[j+1] = temp;
    }

    return shifts;

}

void solve() {

    int n;
    cin >> n;

    int selectionArr[n];
    int insertionArr[n];

    for(int i=0; i<n; i++){
        cin >> selectionArr[i];
    }

    for(int i=0; i<n; i++){
        insertionArr[i] = selectionArr[i];
    }

    int swaps = selectionSort(n, selectionArr);
    int shifts = insertionSort(n, insertionArr);

    if(shifts == swaps){
        cout << "Tie\n";
    } else if(shifts < swaps){
        cout << "Insertion Sort\n";
    } else {
        cout << "Selection Sort\n";
    }

}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        solve();
    }

}