#include <bits/stdc++.h>
using namespace std;
void insertInMiddle(int arr[],int &n,int newItem) {
    if (n>=50) {
         cout<<"Array is full, cannot insert."<<endl;
        return;
    }
    int middle=n/2;
    for (int i=n-1;i>=middle;i--) {
        arr[i+1]=arr[i];
    }
    arr[middle]=newItem;
    n++;
}
int main() {
    int arr[50]={1,2,3,4,5,6};
    int n=6;
    cout<<"Original Array: "<<endl;
    for(int i=0;i<n;i++) {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    int newItem;
    cout<<"Please enter new item :";
    cin>>newItem;
    cout<<endl;
    insertInMiddle(arr,n,newItem);
     cout<<"Array after insertion: "<<endl;
    for (int i=0;i<n;i++) {
         cout<<arr[i]<<" ";
    }

    return 0;
}

