#include <iostream>
using namespace std;

int fact(int a){
    if(a == 0 || a == 1)
        return 1;
    else
        return a * fact(a-1);
}
int main(){
    int r = 0;
    r = fact(5);
    cout << "Factorial of 5 is: " << r << endl;
    return 0;
}