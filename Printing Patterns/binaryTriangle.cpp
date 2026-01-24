// n =6
// 0
// 10
// 010
// 1010
// 01010
// 101010

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    bool flag = 0;

    for(int i=1; i<=n; i++){
        if(i % 2 == 1){
            flag = 0;
        } else {
            flag =1;
        }
        for(int j=1; j<=i; j++){
            cout << flag;
            flag = !flag;
        }
        cout << endl;
    }

}