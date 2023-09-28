bool ispossible(vector<int> arr, int n, int k, int mid) {
    int lastpos = arr[0];
    int cowcount = 1;
    for (int i = 0; i < n; i++) {
      if (arr[i] - lastpos >= mid) {
           cowcount ++;
           if (cowcount == k) {
              return true;
           }
           lastpos = arr[i];
      }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int start = 0;
    int mini = 0;
    int maxi = 0;
    
    for (int i = 0; i < stalls.size(); i++) {
      if (stalls[i] > maxi) {
          maxi = stalls[i];
      }
      if (stalls[i] < mini) {
          mini = stalls[i];
      }
    }
    int max = maxi - mini;
    int ans = -1;
    int mid = start + (max - start)/2;
    while (start <= max) {
      if (ispossible(stalls, stalls.size(), k, mid)) {
           ans = mid;
           start = mid + 1;
      } 
      else {
          max = mid - 1;
      }
      mid = start + (max - start )/2;
    }
    return ans;
}
