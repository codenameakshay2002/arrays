// Online C++ compiler to run C++ program online
//sum of 2 Array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int>a={3,4,5,1,2};
    vector<int>b={62};
    //the ans should be {3,4,5,7,4}
    vector<int>ans;
    cout<<"The below mentioned are 1 array"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The below mentioned are 2 array"<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int i=a.size()-1;
    int j=b.size()-1;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2= b[j];
        int carry=0;
    // calculate to find sum of 2 value
        int sum=val1+val2+carry;
    //find carry and sum to store in the last value of the ans array
        carry=sum/10;
        sum=sum%10;
        //store the sum value in the ans
        ans.push_back(sum);
        i--;
        j--;
//first case if i is present
        while(i>=0){
            int sum=a[i]+carry;
    //find carry and sum to store in the last value of the ans array
        carry=sum/10;
        sum=sum%10;
        //store the sum value in the ans
        ans.push_back(sum);
        i--;
        }
        //first case if j is present
        while(j>=0){
            int sum=b[j]+carry;
    //find carry and sum to store in the last value of the ans array
        carry=sum/10;
        sum=sum%10;
        //store the sum value in the ans
        ans.push_back(sum);
        j--;
        }
        //3 case if the carry is present
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        //store the sum value in the ans
        ans.push_back(sum);
        
    }
    }
    
    // finally traversse the 2 sum array remember print the array in reverse form
    cout<<"The below mentioned are sum of 2 array"<<endl;
    for(int i=ans.size()-1; i>=0;i--){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
