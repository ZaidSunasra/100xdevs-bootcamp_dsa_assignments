#include <iostream>
using namespace std;

int main() {

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if (n1 < n2){
        if(n3 > n2){
            cout <<"Min = " << n1 << endl;
            cout <<"Max = " << n3 << endl;
        } else if (n3 < n1) {
            cout <<"Min = " << n3 << endl;
            cout <<"Max = " << n2 << endl;
        } else {
            cout <<"Min = " << n1 << endl;
            cout <<"Max = " << n2 << endl;
        }
    } else {
        if(n3 > n1){
            cout <<"Min = " << n2 << endl;
            cout <<"Max = " << n3 << endl;
        } else if (n3 < n2) {
            cout <<"Min = " << n3 << endl;
            cout <<"Max = " << n1 << endl;
        } else {
            cout <<"Min = " << n2 << endl;
            cout <<"Max = " << n1 << endl;
        }
    }
    
}