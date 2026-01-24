#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long compare = n;
    long long reverse = 0;

    while(n > 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }

    if(reverse == compare){
        cout << "YES";
    } else {
        cout << "NO";
    }

}