#include <iostream>
using namespace std;

int main() {

    int n1, n2;

    cin >> n1 >> n2;

    if (n1 < n2){
        cout <<"Min = " << n1 << endl;
        cout <<"Max = " << n2 << endl;
    } else {
        cout <<"Min = " << n2 << endl;
        cout <<"Max = " << n1 << endl;
    }
    
}