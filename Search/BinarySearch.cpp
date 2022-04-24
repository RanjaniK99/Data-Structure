#include <iostream>
using namespace std;
void BinarySearch(int arr[],int l,int r,int item){
    while(l<=r){
    int mid=l+r/2;
    if(arr[mid]==item)
      return mid;
    if(arr[mid]<item)
      l=mid+1;
    else
     r=mid-1;
    }
    return -1;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elment of the array: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int item;
    cout<<"Enter the element you want to search: ";
    cin>>item;
   int pos= BinarySearch(arr,0,n-1,item);
   if(pos==-1)
     cout<<"Element not found";
     else
      cout<<item<<", found at index "<<pos;
      return 0;
}
