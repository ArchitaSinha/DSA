
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;
int main() {
    vector<int>arr1 = {1,2,2,4,2,3,5,1,4};
    int high = INT_MIN;
    pair<int, int> result = {-1, -1};

    int k =5;
    for(int i =0;i<arr1.size();i++){
        int sum = 0;
        for(int j=i;j<arr1.size();j++){
            sum += arr1[j];
            if(sum ==k){
            if(high < (j-i+1)){
                high = j-i+1;
                result = {i,j};
            }
            }
        }
    }
    
    cout<<high;
    cout<<"Array"<<endl;
    for(int i=result.first;i<=result.second;i++){
        cout<<arr1[i]<<",";
    }
    return 0;
}
