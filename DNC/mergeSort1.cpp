#include<iostream>
#include<vector>
#include<string>
#include<limits.h>


using namespace std;
void mergeTwoSortedArrays(int arr1[], int size1, int arr2[], int size2, vector<int> &ans){
    //step-1 i and j
    int i = 0;
    int j = 0;

    //step-2 comparision
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    //step-3 copying
    while(i<size1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<size2){
        ans.push_back(arr2[j]);
        j++;
    }

}



int main() {
    int arr1[] = {10,20,30,40};
    int size1 = 4;
    int arr2[] = {15,25};
    int size2 = 2;
    int n = size1 + size2;

    vector<int> ans;

    mergeTwoSortedArrays(arr1,size1,arr2,size2,ans);

    cout<<"Sorted Array -- ";
    for(int i = 0; i <n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}