#include<iostream>
using namespace std;

bool search(int arr[],int key,int n ){
  for(int i=0;i<=n; i++){

    if( arr[i]==key){
        return 1;
    }

  }
  return 0;
}

int main(){
    int n=5;
int arr[5]={54,76,45,6,34};
int key;
cout<<"enter the key to find the value  ";
cin>>key;
bool dam =search( arr, key , n);


if(dam){
    cout<<" key is present";

}
else{
    cout<<"key is absent";
}




return 0;
}
