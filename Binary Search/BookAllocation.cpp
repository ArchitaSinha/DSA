bool ispossible(vector<int> arr, int n, int k, int mid) {
    int count = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (sum + arr[i] <= mid) {
           sum += arr[i];
      } 
      else {
          count ++;
          if (count > k || arr[i] > mid) {
              return false;
          }
          sum = arr[i];
      }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int start = 0;
    int sum = 0;
    int n = boards.size();
    for (int i = 0; i < n; i++) {
         sum += boards[i];
    }
    int ans = -1;
    int end = sum;
    int mid = start + (end - start)/2;
    while (start <= end) {
         if (ispossible(boards, n, k, mid)) {
           ans = mid;
           end = mid - 1;
         } 
         else {
             start = mid + 1;
         }
         mid = start + (end - start)/2;
    }
    return ans;
}
