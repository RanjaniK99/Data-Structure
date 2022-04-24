#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void InsertionSort(int arr[],int n){
    int key,j,i;
    for( i=1;i<n;i++)
     key=arr[i];
     j=i-1;

     while(j>=0 && arr[j]>key){
         arr[j+1]=arr[j];
         j=j-1;
     }
     arr[j+1]=key;
}
int main(){
    int n,arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n Before insertion sort:";
    display(arr,n);
    InsertionSort(arr,n);
    cout<<"\n After insertion sort:";
     display(arr,n);
     return 0;
}