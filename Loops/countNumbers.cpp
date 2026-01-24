#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    
    int even = 0, positive = 0, negative = 0;

    for(int i=0; i<n; i++){
        if(nums[i] > 0){
            positive++;
        }
        if(nums[i] < 0){
            negative++;
        }
        if(nums[i] % 2 == 0){
            even++;
        }
    }

    cout << positive << endl;
    cout << negative << endl;
    cout << even << endl;
    cout << n - even << endl;

}