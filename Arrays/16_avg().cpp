#include <stdio.h>
#include <stdlib.h>

struct Array {
  int A[20];
  int size;
  int length;
};

void Display(struct Array arr){ //Display function
    int i;
    printf("\n Elements are \n");
    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}



int avg(struct Array arr){
int sum=0;
int n = 0;
for(int i=0;i<arr.length;i++){
    sum = sum+arr.A[i];
    n++;
}
return sum/n;
}


int main(){
    struct Array arr = {{2,4,1,3,6},10,5};
    printf("%d\n",  avg(arr));
    Display(arr); //passing arr in display function
    return 0;
}
