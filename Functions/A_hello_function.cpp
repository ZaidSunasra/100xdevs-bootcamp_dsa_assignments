#include <iostream>
using namespace std;

void printLearningFunction(int n){
    for(int i=0; i<n; i++){
        cout << "I am learning functions" << endl;
    }
}

int main() {

    int n;
    cin >> n;
    printLearningFunction(n);

}