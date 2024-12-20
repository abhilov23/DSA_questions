#include <stdio.h>
using namespace std;

//this function is calling itself then returning the value 12345
int recursion(int n){

    if(n>0){
        recursion(n-1);  //recursive call
        printf("%d", n);
    }
}


int main(){
 int m = 5;
 recursion(m);
}