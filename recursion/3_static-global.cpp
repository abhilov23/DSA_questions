//now in this function we are going to return global/static variables instead of simple variables 
#include <stdio.h>

 int count = 0; //taking a global variable

using namespace std;


int recursion(int n){
    
    //int count = 0; //or you can also take static variable as well
    if(n>0){
        count++;
        return recursion(n-1)+count;
    }
    return 0;
}
int main(){
    int m = 5;
    printf("%d", recursion(m));
    return 0;
}

//now if you try to do the same with the simple variables it will also give you the same output the there is a very basic difference we can see.