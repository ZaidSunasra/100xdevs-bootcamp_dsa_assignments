#include<iostream>
using namespace std;

void solve(){

    string word;
    cin >> word;

    int n = word.size(), i = 0;

    while( i < n){
        int count = 0, j = i;
        while(j < n && word[i] == word[j]){
            count++;
            j++;
        }
        cout << word[i];
        if(count > 1){
            cout << count;
        }
        i = j;
    }

    // int wordcount = 0, n = word.size(), pointer = 0;

    // for(int i=0; i<n; i++){
    //     if(word[pointer] == word[i]){
    //         wordcount++;
    //     } else {
    //         cout << word[pointer];
    //         if(wordcount > 1){
    //             cout << wordcount;
    //         }
    //         pointer = i;
    //         wordcount = 0;
    //         i--;
    //     }
    // }

    // cout << word[pointer];
    // if(wordcount > 1){
    //     cout << wordcount;
    // }

    cout << endl;
}

int main(){

    int n;
    cin >> n;
    
    for(int i=0; i<n;i++){
        solve();
    }
}