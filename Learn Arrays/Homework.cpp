#include <iostream>
using namespace std;

// To print sum of elements in an Array!
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=arr[i]+sum;
    }
    return sum;
}
// To print all the unique elements in an Array!
int unique(int arr[],int size){
    for(int i=0;i<size;i++){
        int j;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                break;
            }
        }
    }
}

//TO print intersection of 2 Arrays!
int intersection(int arr1[],int arr2[],int size1, int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}


int main(){
    int arr[]={1,2,3,4,5,1,2,3,4};
    int arr2[]={1,2,3,4,5,6,7,8,9};
    int size2=9;
    int size1=5;
    cout<<intersection(arr,arr2,size1,size2)<<endl;
    // cout<<sum(arr,size)<<endl;
    // cout<<unique(arr,size)<<endl;
    return 0;
}