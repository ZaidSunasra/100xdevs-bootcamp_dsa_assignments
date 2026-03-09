#include<iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size(), a_count = 0, b_count = 0;
    for(int i =0; i<n; i++){
        if(s[i] == 'a'){
            a_count++;
        } else{
            b_count++;
        }
    }

    if(a_count == b_count){
        cout << "YES";
    } else {
        cout << "NO";
    }
}