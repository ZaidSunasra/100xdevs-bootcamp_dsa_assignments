#include<iostream>
#include<string>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n == 0){
        cout << n;
        return 0;
    }

    string reverse;

    while(n > 0){
        int lastDigit = n % 10;
        reverse = reverse +  to_string(lastDigit);
        n /= 10;
    }

    cout << reverse;

}