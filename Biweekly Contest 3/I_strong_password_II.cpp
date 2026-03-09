#include<iostream>
using namespace std;

int main(){

    string password;
    cin >> password;

    bool isLower = false, isUpper = false, isDigit = false, isSpecial = false;
    int n = password.size(), conditionsMet = 0;

    for(int i=0; i<n; i++){
        if(password[i] >= 65 && password[i] <= 90){
            isUpper = true;
        } else if(password[i] >= 97 && password[i] <= 122){
            isLower = true;
        } else if(password[i] >= 48 && password[i] <= 57){
            isDigit = true;
        } else {
            isSpecial = true;
        }
    }

    if(isLower) conditionsMet++;
    if(isUpper) conditionsMet++;
    if(isDigit) conditionsMet++;
    if(isSpecial) conditionsMet++;

    if(conditionsMet == 4){
        cout << "Strong";
    } else if (conditionsMet >= 3){
        cout << "Moderate";
    } else {
        cout << "Weak";
    }
}