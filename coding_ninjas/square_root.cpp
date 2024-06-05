int floorSqrt(int n)
{
    // Write your code here.
    if (n == 0 ||n==1) {
      return n;
    }
    int start=2;
    int end=n-1;
    int mid;
    while (start <end) {
       mid=start+(end-start)/2;
       if (mid <= n/mid) {
        start=mid+1;
       } 
       else {
           end=mid;
       }

    }
    return start-1;
}
