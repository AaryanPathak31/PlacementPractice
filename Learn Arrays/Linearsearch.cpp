// Linear Search is a simple searching algorithm that checks each element of an 
// array one by one until it finds the target value or reaches the end.
//
#include<iostream>
using namespace std;
void search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"Element found at index: "<<i;
            return;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int target=5;
    int size=sizeof(arr)/sizeof(arr[0]);
    search(arr,size,target);
    return 0;
}