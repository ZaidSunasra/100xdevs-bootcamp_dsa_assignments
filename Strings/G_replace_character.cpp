#include <iostream>
using namespace std;

int main(){

    string s;
    char target, to_replace;
    cin >> s >> target >> to_replace;

    for(int i=0; i<s.size(); i++){
        if(s[i] == target){
            s[i] = to_replace;
        }
    }

    cout << s;
    
}