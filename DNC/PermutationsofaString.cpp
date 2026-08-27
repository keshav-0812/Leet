#include<iostream>
#include<vector>
using namespace std;

void permutat(string s, int i){
    //base case
    if(i>=s.length()){
        cout<<s<<endl;
        return;
    }
        //1 case slove kare
        for(int j=i; j<s.length(); j++){
            swap(s[i],s[j]);
            permutat(s,i+1);
        }
    
    
}

int main(){
    //vector<string> ans;
    string s = "abcd";
    int n = 3;
    int i=0;
    permutat(s,i);
    return 0;
}