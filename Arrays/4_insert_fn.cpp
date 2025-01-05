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

//x is the element you want to insert in arr array
void Append(struct Array *arr, int x){ //Append function
    if(arr->length < arr->size) //checking the size of the array
    {
        arr->A[arr->length++] = x;
    }
}

//this time we are passing the element you want to insert, and position it along with the array
void insert(struct Array *arr,int index, int x){
   if(index>=0 && index <= arr->length){
    for(int i=arr->length; i>index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
   }
}



int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    insert(&arr, 0, 3);
    //Append(&arr, 10); //passing arr[0][0] and number i want to insert i.e. 10
    Display(arr); //passing arr in display function
    return 0;
}

