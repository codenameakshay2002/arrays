#include<iostream>
using namespace std;
/*
void reseverse(int arr[], int n){
int start=0;
int end=n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}

void printarr(int arr[], int n){
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

}
int main(){

int arr[5]={23,54,2,3,65};
int crr[5]={54,52,56,43,33};

reseverse( arr,5);
reseverse( crr,5);
printarr(arr,5);
printarr(crr,5);

return 0;
}

*/
void reversearr(char arr[],int n)
{
    int start=0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int grtlrng(char arr[]){
    int count=0;
for(int i=0; arr[i]!='\0';i++){
    count++;
}
return count;
}

int main(){
char arr[100];

cin>>arr;
int leng =  grtlrng(arr);
reversearr(arr,leng);
cout<<"the reversed array is "<<arr;
return 0;

}
