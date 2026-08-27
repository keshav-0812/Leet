#include<iostream>
#include<vector>
using namespace std;


void mergeSortedarr(int arr[], int s, int mid, int e){
    int i = 0;
    int j = 0;

    int leftsize = mid-s+1;
    int rightsize = e-mid;
  
    int temp[100];
    int* arr1 = new int[leftsize];
    int* arr2 = new int[rightsize];
    
    int mainArrayindex = s;
    for(int i = 0; i<leftsize; i++){
        arr1[i] = arr[mainArrayindex];
        mainArrayindex++;
    } 
    mainArrayindex = mid+1;
    for(int i=0; i<rightsize; i++){
        arr2[i] = arr[mainArrayindex];
        mainArrayindex++;
    }

    //int i=0;
    //int j=0;

    mainArrayindex = s;
    while(i<leftsize && j < rightsize){
        if(arr1[i]<arr2[j]){
            arr[mainArrayindex] = arr1[i];
            i++;
            mainArrayindex++;
        } else {
            arr[mainArrayindex] = arr2[j];
            j++;
            mainArrayindex++;
        }
    }
    while(i<leftsize){
        arr[mainArrayindex] = arr1[i];
        i++;
        mainArrayindex++;
    }

    while(j<rightsize){
        arr[mainArrayindex] = arr2[j];
        j++;
        mainArrayindex++;
    }

}

void mergeSort(int arr[], int start, int end){
    //base case 
    if(start>=end){
        return;
    }
    //ek bade array ko 2 part me divide krte hai
    int mid = (start+end)/2;
    //left part ko recusion se solve krwate the
    mergeSort(arr,start,mid);
    //right part ko recusion se solve krwate the
    mergeSort(arr,mid+1,end);
    //recursion me jo sorted arrays diye hai unko merge krte the
    mergeSortedarr(arr,start,mid,end);
}



int main(){
    int arr[] = {7,2,4,3,1,5};
    int size = 6;

    int start = 0;
    int end = size-1;

    mergeSort(arr,start,end);

    cout<<"Printing the sorted array "<<endl;

    for(int i = 0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
    
    return 0;
}