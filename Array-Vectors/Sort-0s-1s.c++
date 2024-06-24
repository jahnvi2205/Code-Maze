#include<iostream>
using namespace std;

void sorting(int arr[],int size){
    int zero=0,one=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
    }
    for(int i=0;i<zero;i++){
        arr[i]=0;          }
    for(int i=zero;i<zero+one;i++){
        arr[i]=1;                 }
}

int main(){
    int arr[]={1,0,0,1,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sorting(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
    return 0;
}