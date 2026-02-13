#include <iostream>
using namespace std;

int main(){

    char s;
    cin >> s;

    char lowercase = s;

    if(s >= 65 && s <= 90){
        lowercase = s + 32;
    }
    cout << lowercase;

}