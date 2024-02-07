#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[],int n) {
    if(n<=1) {
        return;
    }
    int max_val=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>max_val){
            max_val=arr[i];
        }
    }
    int* count=new int[max_val+1]();
    for(int i=0;i<n;i++) {
        count[arr[i]]++;
    }
    int index = 0;
    for(int i=0;i<=max_val;i++){
        while (count[i]>0) {
            arr[index]=i;
            index++;
            count[i]--;
        }
    }
    delete[] count;
}

int main(){
    int arr[] = {5,2,8,9,7,7,3,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted array: ";
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
     cout<<endl;
    countingSort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
     cout<<endl;
    return 0;
}
