#include<iostream>
using namespace std;

int main(){

    string num;
    cin >> num;

    int sum = 0;

    for(int i=0; i<num.size(); i++){
        sum += num[i] - '0';
    }

    cout << sum;
}