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

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array *arr){ //Max function
   int *B;
   int i,j;
   B = (int *)malloc(arr->length * sizeof(int)); //size of array
   
   for(i=arr->length-1, j=0; i>=0; i--, j++)
       B[j] = arr->A[i];
   for(i=0; i<arr->length; i++)
       arr->A[i] = B[i];
   
   free(B); // Don't forget to free the dynamically allocated memory
}

int main(){
    struct Array arr = {{2,4,1,3,6},10,5};
    Reverse(&arr);
    Display(arr); //passing arr in display function
    return 0;
}
