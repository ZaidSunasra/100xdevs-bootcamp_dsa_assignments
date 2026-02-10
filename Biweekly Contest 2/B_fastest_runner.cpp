#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int time[n];

    for(int i=0; i<n; i++){
        cin >> time[i];
    }

    int fastest_time = time[0];
    int id = 1;

    for(int i=0; i<n; i++){
        if(fastest_time >= time[i]){
            fastest_time = time[i];
            id = i+1;
        }
    }

    cout << id;

}