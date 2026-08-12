#include<iostream>
#include<string>
using namespace std;
void stringfunc(string arr[],int n){
    for(int i=1;i<n;i++){  //1
        string flag=arr[i]; //flag=1=Apple
        int j=i-1; //j=1-1=0=Strawberry
        while(j>= 0 && arr[j]> flag){ 
            arr[j+1]=arr[j];   //arr[j-1]= Strawberry
            j--; //0
        }
        arr[j+1]=flag;  //arr[j]= Apple
    }
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;}
}
int main(){
cout<<"Question 1: Write a function that sorts an array of strings (not ints) alphabetically using insertion sort. "<<endl;
    string var[100];
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter "<<n<<"words (Make sure words start with capital letters): ";
    for(int i=0;i<n;i++){
        cin>>var[i];
    }
    stringfunc(var,n);
return 0;
}