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

    for(int i=0; i<col; i++){
        cout << arr[0][i] << " ";
    }

    for(int i=1; i<row; i++){
        cout << arr[i][col-1] << " ";
    }

    if(row > 1){
        for(int i=col-2; i>=0; i--){
            cout << arr[row-1][i] << " ";
        }
    }

    if(col > 1){
        for(int i=row-2; i>=1; i--){
            cout << arr[i][0] << " ";
        }
    }

}