#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int> arr, int element){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {10,20,30,40,50};
    int element = 40;
    cout<<linearSearch(arr,element)<<endl;
    return 0;
}