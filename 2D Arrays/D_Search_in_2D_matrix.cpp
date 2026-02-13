#include <iostream>
using namespace std;

int main(){

    int row, col, target;
    cin >> row >> col >> target;

    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                cout << "true";
                return 0;
            }
        }
    }

    cout << "false";

}