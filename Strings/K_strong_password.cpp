#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    cin >> s;

    if(s.size() != 10){
        cout << "Weak";
        return 0;
    }

    int lcCount = 0, ucCount = 0, dCount = 0, sCount = 0; 

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
           ucCount++;
        } else if (s[i] >= 97 && s[i] <= 122){
            lcCount++;
        } else if (s[i] >= 48  && s[i] <= 57){
            dCount++;
        } else {
            sCount++;
        }
    }

    if(ucCount >= 1 && lcCount >= 1 && dCount >= 1 && sCount >= 1){
        cout << "Strong";
    } else {
        cout << "Weak";
    }
    
}