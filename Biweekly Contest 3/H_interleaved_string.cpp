#include<iostream>
using namespace std;

int main(){

    string s1, s2;
    cin >> s1 >> s2;

    int s1ptr = 0, s2ptr =0;
    int n1 = s1.size(), n2 = s2.size();

    while(s1ptr < n1 && s2ptr < n2){
        cout << s1[s1ptr] << "-";
        cout << s2[s2ptr];
        s1ptr++;
        s2ptr++;
        if(!(n1 == n2 && s1ptr == n1)){
            cout << "-";
        }
    }

    while(s1ptr < n1){
       cout << s1[s1ptr];
       s1ptr++;
       if(s1ptr < n1){
        cout << "-";
       }
    }

    while(s2ptr < n2){
        cout << s2[s2ptr];
        s2ptr++;
        if(s2ptr < n2){
            cout << "-";
        }
    }
}