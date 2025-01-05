#include <iostream>

using namespace std;

//taking the array as a reference in a pointer
int printArray(int * arr, int n){
  cout << "Size of array in fn:" << sizeof(arr) << endl;
  
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(int); //for computing how many elements are there in the array
    
    cout <<sizeof(arr) << endl;
    cout << "Number of elements in the array: " << n << endl;
    //passing the array as a reference to the upper function
    printArray(arr, n);

    return 0;
}