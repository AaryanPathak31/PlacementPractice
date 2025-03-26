#include<iostream>
using namespace std;

int main(){
    int marks[5]={99,100,36,78,23};
    int size= sizeof(marks)/sizeof(marks[0]);

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;

    }

}