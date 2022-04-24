#include<iostream>
using namespace std;
void swap(int *var1, int *var2 ){
    int temp=*var1;
    *var1=*var2;
    *var2=temp;
}
void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1;i++){
      for(int j=0;j<n-i-1;i++)
         if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
         }
}
void display(int arr[], int n){
    for(int i=0;i<=n;i++)
        cout<<arr[i];
}
int main(){
    int n;
    int arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting: ";
    display(arr,n);
    BubbleSort(arr,n);
    cout<<"After Sorting:";
    display(arr,n);
    return 0;
}
