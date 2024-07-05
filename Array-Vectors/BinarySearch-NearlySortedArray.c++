#include<iostream>
using namespace std;
int nearlysorted( int arr[], int size, int target){
    int start = 0, end = size-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(arr[mid] == target){
            return mid;
        }
        else if(mid+1<size && arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid] > target){
            end = mid-2;
        }
        else if(arr[mid-1]<target){
            start = mid+2;;
        }
    }return -1;
}

int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 70;
<<<<<<< HEAD
    int index = nearlysorted(arr,size,target);
    if(index == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<index;
    }
=======
    cout<<target<<" found at: "<<nearlysorted(arr,size,target);
>>>>>>> 148128b12cbaf9c86fafb08a15e142f327266e20
    return 0;
}