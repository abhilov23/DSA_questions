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

int Delete(struct Array *arr, int index){ //Delete function
  int x = 0;
  if(index>=0 && index<arr->length-1){
    x = arr->A[index];
    for(int i=index; i<arr->length-1;i++)
        arr->A[i] = arr->A[i+1];
    arr->length--;
    return x;
  }
  return x;
}




int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n", Delete(&arr,4));
    Display(arr); //passing arr in display function
    return 0;
}

