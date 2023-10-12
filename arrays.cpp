#include<iostream>
using namespace std;


int getmax(int num[], int n){
int max=INT_MIN;
for(int i=0;i<=n;i++){

if(num[i]>max){
        max=num[i];

}
 }

 return max;
}

int getmin(int num[], int n){
int min=INT_MAX;
for(int i=0;i<=n;i++){

if(num[i]<min){
        min=num[i];

}
 }

 return min;
}
int main(){
cout<<"enter the size";
   int Size;
   cin>>Size;

   int num[100];


   for( int i=0;i<=Size;i++){
        cin>>num[i];
   }
cout<<"the maximum value is :"<<  getmax(num,Size)<<endl;
cout<<"the mainmum value is :"<<  getmin(num,Size);



return 0;
}

/*
//hw -1
int sumarray(int arr[], int n){
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+arr[i];
}

return sum;
}

int main(){
cout<<"enter the size of the array ";
int n;
cin>> n;

int arr[100];

for(int i=1; i<=n;i++){
    cin>>arr[i];
}
cout<<"the sum of the array is :"<<sumarray(arr,n);
*/

/*
int main(){
int n;
cin>>n;
int arr[200];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=n-1;i>=0;i--){
    cout<<arr[i];
}



return 0;
}
*/

/*
//HW swap alternate of array


void  print1(int arr[],int n){
cout<<"the orignal array is n: ";
for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}

}

void  exchange(int arr[],int n){
  //  int s= sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int next=1;
    while(start<n-1){
        swap(arr[start],arr[next]);
        start=start+2;
        next=next+2;
    }

}

void  print(int arr[],int n){
cout<<"the exchanged array is n:";
for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}

}
int main(){

    int n;
    cout<<"enter  the limit of the  an array  ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print1(arr,n);
    exchange(arr,n);
    print(arr,n);
    return 0;

}
*/
/*
//finding unqiuq element in array of continues double same num
void  print1(int arr[],int n){
cout<<"the orignal array is n: ";
for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}
cout<<endl;
}

void  uniq(int arr[],int n){
  //  int s= sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int next=1;
    while(start<n-1){
        if(arr[start]!=arr[next]){
            cout<<arr[start]<<" is a unique element";

        }
        start=start+2;
        next=next+2;
    }

}

int main(){

    int n;
    cout<<"enter  the limit of the  an array  ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print1(arr,n);
    uniq(arr,n);

    return 0;

}
*/
