#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n) {
    for(int i=0; i< n-1;i++) {
        for(int j=0; j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() {
    int arr[]={6,4,9,8,3,7,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"Unsorted array: "<<endl;
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";

    }

    bubbleSort(arr,n);
     cout<<endl<<endl;
     cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
    return 0;
}
