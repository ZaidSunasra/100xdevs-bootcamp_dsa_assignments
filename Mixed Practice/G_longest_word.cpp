#include<iostream>
#include<string>
using namespace std;

int main(){
   
    string sentence;
    getline(cin, sentence);

    int n = sentence.size(), i = 0, max_count = 0;

    while(i < n){

        if(sentence[i] == ' '){
            i++;
            continue;
        }

        int j = i, count = 0;

        while(j < n && sentence[j] != ' '){
            count++;
            j++;
        }

        if(count > max_count){
            max_count = count;
        }
        
        i = j;
    }

    cout << max_count;
}