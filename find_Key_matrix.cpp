#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
   int key =8;
   int falg=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(key==arr[i][j]){
                falg=1;
                cout<<"7 is prenent in the index row :"<<i<<endl;
                cout<<"also in the colum : "<<j;
                cout<<endl;
            }
        }
    }
    if(falg==0){
        cout <<" key not present in the matrix";
    }

    return 0;
}