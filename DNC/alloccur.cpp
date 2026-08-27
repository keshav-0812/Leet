#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeele(vector<int> arr, int ele){
    int k=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=ele){
            swap(arr[k],arr[i]);
            k++;
        }
    }
    return k;
}
int main() {
    vector<int> arr = {10,20,20,30,40};
    int ele = 20;
    cout<<removeele(arr,ele)<<endl;
    return 0;
}