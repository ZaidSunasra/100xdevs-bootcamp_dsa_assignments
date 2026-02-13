#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    char target;
    cin >> s >> target;

    int i=0;
    while (i < s.size()){
        if(s[i] == target){
            s.erase(i, 1);
        } else {
            i++;
        }
    }

    cout << s;
    
}