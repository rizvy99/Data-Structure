#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols;
     cout<<"Enter the number of rows: ";
     cin>>rows;
     cout<<"Enter the number of columns: ";
     cin>>cols;
    if(rows!=cols) {
         cout<<"This program works for square matrices only."<<endl;
        return 1;
    }
   if (rows <= 0 || cols <= 0) {
        std::cout << "Invalid array dimensions." << std::endl;
        return 1;
    }
    int matrix[100][100];
    cout<<"Enter the elements of the "<<rows<<"x"<<cols<<" matrix:"<<endl;
    // Input matrix elements
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++){
             cout<<"Row["<<i<<"]Col["<<j<<"] = " ;
             cin>>matrix[i][j];
        }
    }
    cout<<endl;
    //Output matrix element
    cout<<"Matrix elements :"<<endl;
     for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
             cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Calculate and display the main diagonal sum
    int mainDiagonalSum = 0;
    for (int i=0;i<rows;i++) {
        mainDiagonalSum += matrix[i][i];
    }
    cout<<"Sum of the main diagonal elements: "<<mainDiagonalSum << endl;

    // Calculate and display the secondary diagonal sum
    int secondaryDiagonalSum = 0;
    for (int i=0;i<rows;i++) {
        secondaryDiagonalSum += matrix[i][cols-1-i];
    }
     cout<<"Sum of the secondary diagonal elements: "<<secondaryDiagonalSum<<endl;
    return 0;
}
