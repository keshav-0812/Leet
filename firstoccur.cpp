#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> arr = {10,20,20,20,30,40};
    int element = 20;
    cout<<"Array Before deletion : ";
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";

    auto it = find(arr.begin(),arr.end(),element);
    if(it!=arr.end()){
        arr.erase(it);
    }
    cout<<"Array after deletion : ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}