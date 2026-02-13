#include <iostream>
using namespace std;

int main(){

    int row, col;
    cin >> row >> col;

    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    int maxRow = -1;
    int maxCount = 0;

    for(int i=0; i<row; i++){
        int count = 0;
        for(int j=0; j<col; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count > maxCount){
            maxRow = i;
            maxCount = count;
        }
    }

    cout << maxRow;

}