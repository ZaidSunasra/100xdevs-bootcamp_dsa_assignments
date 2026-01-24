// n = 5
//     *
//    * *
//   *   *
//  *     *
// * * * * *

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i == n){
            for(int i=1; i<=n; i++){
                if(i == n){
                    cout << "*";
                } else {
                    cout << "* ";
            }
        }
        } else {
            for(int j=1; j<=n - i; j++){
                cout << " "; 
            }
            for(int j=1; j <= 2 * i - 1; j++){
                if(j == 1 || j == 2 * i -1 ){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    
}
