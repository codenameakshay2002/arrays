#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixbinary(int arr[3][3]){
      int target=10;
    int row = 3;
    int col = 3;
    int flag=0;
    int start=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        int elemt= arr[mid/col][mid%col];
        if(elemt==target){
           return 1;
            
        }
        else if(elemt>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
  }
};

int main() {
    // Write C++ code here
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
     Solution K; //object
    
int p=K.matrixbinary(arr);
    if(p==1){
        cout<<"the elemnt is present in the matrix";
    }else{
          cout<<"the elemnt is not present in the matrix";
    }
    return 0;
}