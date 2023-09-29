#include <iostream>
#include<queue>
using namespace std;
int main() {
   priority_queue<int > maxi;
   // maxi_heap

  //min head
   priority_queue<int, vector<int> , greater<int >> mini;
  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  int n = maxi.size();
  for(int i=0; i< n;i++){
    cout << maxi.top() << " ";
    maxi.pop();
  } cout << endl;

  mini.push(5);
  mini.push(2);
  mini.push(9);
  int n1 = mini.size();
  for(int i=0; i< n1;i++){
    cout << mini.top() << " ";
    mini.pop();
  } cout << endl;
  
  
  
}
