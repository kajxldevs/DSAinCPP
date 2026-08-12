/*Bubble sort
is a basic sorting algorithm that works by repeatedly 
comparing adjacent elements in a list and swapping them if they are in the wrong order
*/

#include <iostream>
using namespace std;

void bubble(){
    int arr[]={64, 25, 12, 22, 11};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
          
        }
          for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
        
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    cout << "Question 1: Given arr[] = {64, 25, 12, 22, 11}, write a function that sorts it using bubble sort AND prints the array after every pass (not just the final result). " << endl;
    bubble();
    return 0;
}