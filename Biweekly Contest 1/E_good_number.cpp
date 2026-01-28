#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;

   int good_numbers = 0;

   for(int i=0; i <n; i++){
        int temp;
        cin >> temp;
        if(temp != 0 && (18 % temp == 0)){
            good_numbers++;
        } else if(temp % 45 == 0){
            good_numbers++;
        } else {
            good_numbers = good_numbers;
        }
    }

    cout << good_numbers;
    
}