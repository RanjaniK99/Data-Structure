#include <iostream>
using namespace std;
void LinearSearch(int arr[], int len, int item)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == item)
        {
            cout << "Element " << item << ", found at index:" << i;
            return;
        }
    }
    cout << "Element not found";
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the Array values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[]={1,2,3,4,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int item;
    cout << "Enter the item to be searched: ";
    cin >> item;
    LinearSearch(arr, len, item);
    return 0;
}

// #include<iostream>
// using namespace std;
// void LinearSearch(int arr[],int len, int item){
//     for(int i=0;i<len;i++){
//         if(arr[i]==item){
//             cout<< item <<", found at index,"<< i;
//         }
//         else{
//             cout<<"Element not found";
//         }
//     }
// }
// int main(){
//     int a[]={1,2,3,4,5,6};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int item=5;
//     LinearSearch(arr,len,item);
//     return 0;
// }