#include<iostream>
using namespace std;

int main(){

    string word;
    cin >> word;

    int n = word.size();
    
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(word[i] >= 65 && word[i] <= 90){
            word[i] = word[i] + 32;
        } else {
            word[i] = word[i] - 32;
        }
    }

    cout << word;
}