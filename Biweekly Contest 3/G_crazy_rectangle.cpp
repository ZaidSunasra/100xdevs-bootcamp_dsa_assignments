#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    
    int number = 1;
    char ch = 'a';
    bool isNumberTurn = true;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(isNumberTurn){
                cout << number;
                isNumberTurn = false;
                if(number == 9){ 
                    number = 1;
                    continue;
                }                
                number++;
            } else {
                cout << ch;
                isNumberTurn = true;
                if(ch == 'z'){ 
                    ch = 'a';
                    continue;
                }
                ch++;
            }
        }
        cout << endl;
    }
}