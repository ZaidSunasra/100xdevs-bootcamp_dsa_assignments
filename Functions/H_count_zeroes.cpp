#include<iostream>
using namespace std;

int countZeroes(long long n){

   int zeroCount = 0;

   if( n == 0){
    cout << 1;
    return 0;
   }

   while(n){
    int rem = n % 10;
    if(rem == 0){
        zeroCount++;
    }
    n = n / 10;
   }

   cout << zeroCount;
}

int main(){
    
    long long n;
    cin >> n;

    countZeroes(n);

}