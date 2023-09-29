#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    bool flag = false;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
             flag = true;
             swap (arr[j],arr[j+1]);
        
        }
     
        }
        if (flag == false) {
            break;
        }
      }
    
}
