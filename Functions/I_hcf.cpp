#include <iostream>
using namespace std;

int printFactors(int n1, int n2){
    int lowerNumber = n1 > n2 ? n2 : n1;
    int hcf = 1;
    for(int i=1; i<=lowerNumber; i++){
        if(n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int main() {

    int n1, n2;
    cin >> n1 >> n2;
    int hcf = printFactors(n1, n2);
    cout << hcf;

}