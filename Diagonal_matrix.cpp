// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<"print the first diagonal elemnent ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"print the second diagonal elemnt ";
    int i=0;
    int j=3-1;
    while(i<n){
            cout<<arr[i][j]<<" ";
            j--;
        i++;
    }

    return 0;
}