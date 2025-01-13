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

void InsertSort(struct Array *arr, int x){ //for inserting at the shorted position
    int i=arr->length-1;
    if(arr->length==arr->size){
        return;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

int isSorted(struct Array arr){
    int i;
    for(i=0; i<arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}


int main(){
    struct Array arr = {{2,3,7,11,15},10,5};
    InsertSort(&arr, 5); //passing arr[0][0] and number i want to insert i.e. 5
    printf("%d \n", isSorted(arr)); //checking if the elements are sorted or not.....
    Display(arr); //passing arr in display function
    return 0;
}
