#include<iostream>
using namespace std;
int main(){
    cout<<"Question 1: Sort a random array of n integers (accept the value of n from user) in ascending order by using bubble sort algorithm."<<endl;
    int arr[100];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
cout<<"Soted array is: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}