#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int>arr={1,2,3,4,5,6,7,8};
    int k=3;
    int n= arr.size();
    int ans[n];
    
    cout<<"array before rotate : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        //rotate the array using rotate formula
        ans[(i+k)%n]=arr[i];
    }
    cout<<"array after rotate : ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}