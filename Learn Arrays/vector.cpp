#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> vec;
    vector<int> vec(3,0); //Means size of vector is 3 and all elements are 0.
    vector<int> vec={1,2,3,4};
    cout<<vec[0]<<endl;
    return 0;
    /*
    size() → Returns the number of elements in the vector.
    vector<int> v = {1, 2, 3};
    cout << v.size(); // Output: 3

    push_back(x) → Adds element x at the end of the vector.
    vector<int> v;
    v.push_back(10); // v = {10}

    pop_back() → Removes the last element from the vector.
    vector<int> v = {10, 20, 30};
    v.pop_back(); // v = {10, 20}

    front() → Returns the first element of the vector.
    vector<int> v = {5, 10, 15};
    cout << v.front(); // Output: 5

    back() → Returns the last element of the vector.
    vector<int> v = {5, 10, 15};
    cout << v.back(); // Output: 15
    
    at(index) → Returns the element at the given index with bounds checking.
    vector<int> v = {10, 20, 30};
    cout << v.at(1); // Output: 20  
    */
}