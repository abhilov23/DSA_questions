#include <stdio.h>


//it will take less number of multiplications for computation
 int power(int m, int n){
    if(n==0)
        return 1;
    if(n%2==0)
        return power(m*m, n/2);
    else
        return m * power(m, n-1)/2;
}

int main(){
    int r = power(3, 4);
    printf("%d\n", r);
}