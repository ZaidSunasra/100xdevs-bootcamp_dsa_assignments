#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin , s);

    int wordCount = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            wordCount++;
        }
    }

    cout << wordCount + 1;
    
}