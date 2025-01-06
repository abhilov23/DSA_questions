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

//we were using call by calue for read only
//and call by reference for read and write
int BinarySearch(struct Array arr, int key){ 
   int l,mid,h;
   l=0,h=arr.length-1;
   while(l<=h){
    mid=(l+h)/2;
    if(arr.A[mid] == key) return mid; //if found returns index
    else if(key < arr.A[mid]) h=mid-1; //if mid is high then mid is the new high
    else l=mid+1; //else mid+1 is the new low
   }
   return -1;
}

//Recursive binary search
int RBinSearch(int a[], int l, int h, int key){
int mid;
if(l<=h){
    mid=(l+h)/2;
    if(a[mid] == key) return mid; //if we found the key then we are going to return key
    else if(a[mid] < key) return RBinSearch(a, mid+1, h, key); //if the key is bigger then recursion calling.
    else return RBinSearch(a, l, mid-1, key);
 
}
return -1;
}


int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n",  RBinSearch(arr.A,0, arr.length,5));
    Display(arr); //passing arr in display function
    return 0;
}
