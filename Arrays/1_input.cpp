#include<iostream>
using namespace std;

int main(){
    int marks[100];
     

    //taking the number of student it shound have
    int n;
    cout << "enter the number of students" << endl;
    cin >> n;
    
    //taking the input from the user
    cout << "Enter the marks of the students" << endl;
    for(int i=0; i<n; i++){
        cin >> marks[i];
    }
    
    //giving the marks of the students
    for(int i=0; i<100; i++){
        cout << marks[i] << endl;
    }
    
    return 0;
}