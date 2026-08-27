#include<iostream>
using namespace std;

void quickSort(int arr[], int start, int end)
{
    if(start>=end){
        return;
    }
    int pivot = end;
    int i = start -1;
    int j = start;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            ++i;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i],arr[pivot]);
    quickSort(arr,start,i-1);
    quickSort(arr,i+1,end);
}



int main() {
    int arr[] = {7,2,1,8,6,3,5,4};
    int n = 8;
    int start = 0;
    int end = n-1;
    quickSort(arr,start,end);
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}