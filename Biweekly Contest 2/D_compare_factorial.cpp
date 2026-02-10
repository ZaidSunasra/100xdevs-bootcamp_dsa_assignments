#include<iostream>
using namespace std;

int main(){

    long long n1, n2;
    cin >> n1 >> n2;

    if(n1 == n2){
        cout << "Yes";
    } else if (n1 == 0 && n2 == 1){
        cout << "Yes";
    } else if(n1 == 1 && n2 == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }
    
}