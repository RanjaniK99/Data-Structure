//  if (min!=i){
    //      swap(a[i],a[min]);
    //  }
#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void SelectionSort(int a[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
      int min=i;
     for(int j=i+1;j<n;j++)
         if(a[j]<a[min])
            min=j;
     int temp=a[min];
     a[min]=a[j];
     a[j]=temp;
}}
int main(){
    int n,arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n Before selection sort:";
    display(arr,n);
    SelectionSort(arr,n);
    cout<<"\n After selection sort:";
     display(arr,n);
     return 0;
}
