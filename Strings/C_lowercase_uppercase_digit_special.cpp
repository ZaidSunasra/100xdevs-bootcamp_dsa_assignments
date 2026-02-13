#include <iostream>
using namespace std;

int main(){

    char s;
    cin >> s;

    if(s >= 48 && s <= 57){
        cout << "Digit";
    } else if (s >= 65 && s <= 90){
        cout << "Uppercase";
    } else if(s >= 97 && s <= 122){
        cout << "Lowercase";
    } else {
        cout << "Special";
    }

}