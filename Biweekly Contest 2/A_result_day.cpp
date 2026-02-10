#include<iostream>
using namespace std;

int main(){

    int n, passing_marks;
    cin >> n;

    int marks[n];

    for(int i=0; i<n; i++){
        cin >> marks[i];
    }

    cin >> passing_marks;

    int students_pass = 0, students_fail = 0;

    for(int i=0; i<n; i++){
        if(marks[i] < passing_marks){
            students_fail++;
        } else {
            students_pass++;
        }
    }

    cout << "Pass: " << students_pass << endl;
    cout << "Fail: " << students_fail;

}