#include<iostream>
using namespace std;
int solve(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = (n-1)*(solve(n-1) + solve(n-2));
    return ans;
}
int getpaintways(int n, int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k+k*(k-1);
    }
    int ans = (k-1)*(getpaintways(n-1,k)+getpaintways(n-2,k));
    return ans;
}
int main(){
    int n = 3;
    int k = 3;
    int ans = getpaintways(n,k);
    cout<<ans<<endl;
}