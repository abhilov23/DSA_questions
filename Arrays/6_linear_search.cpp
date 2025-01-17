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

int LinearSearch(struct Array arr, int key){ //using linear search function
    int i;
    for(i=0; i<arr.length; i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    return -1;
}



int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n", LinearSearch(arr, 4));
    Display(arr); //passing arr in display function
    return 0;
}

