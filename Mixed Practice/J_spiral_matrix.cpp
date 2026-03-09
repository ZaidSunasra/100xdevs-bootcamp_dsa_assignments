#include<iostream>
#include<string>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int sr = 0, sc = 0, er = n-1, ec = m-1;

    while(sr <= er && sc <= ec){

        for(int i = sc; i<=ec; i++){
            cout << arr[sr][i] << " ";
        }
     
        for(int i = sr+1; i<=er; i++){
            cout << arr[i][ec] << " ";
        }
        
        if(sr < er){
            for(int i = ec-1; i >= sc; i--){
                cout << arr[er][i] << " ";
            }
        }
  
        if(sc < ec){
            for(int i=er-1; i >= sr+1; i--){
                cout << arr[i][sc] << " ";
            }
        }

        sr++;
        ec--;
        er--;
        sc++;
    }
}