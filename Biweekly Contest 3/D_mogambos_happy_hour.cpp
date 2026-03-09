#include<iostream>
using namespace std;

int main(){

    string time;
    cin >> time;
    
    if(time[0] == time[3] && time[1] == time[4]){
        cout << "Mogambo is happy";
    } else {
        cout << "Mogambo is sad";
    }
}