#include <stdio.h>
using namespace std;

//this function is returning value then calling itself and the output is 54321
int recursion(int n){

    if(n>0){
        printf("%d", n);
        recursion(n-1);
    }
}


int main(){
 int m = 5;
 recursion(m);
}