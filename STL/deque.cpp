#include <iostream>
#include<deque>
using namespace std;
int main() {
  deque<int> d;
  d.push_back(1);
  d.push_front(2);
  for(int i:d){
    cout << i << " "; 
  }
  cout << endl;
  //accessing elements
  cout << "Element at index 1 - >" << d.at(1);
  cout << "First Element is " << d.front() << endl;
  cout << "Last Element is " << d.back() << endl;

  cout << "Empty ->" << d.empty() << endl;
  d.pop_front();
  for(int i:d){
    cout << i << " "; 
  }
  cout << endl;
  d.push_back(3);
  d.push_front(4);
  for(int i:d){
    cout << i << " "; 
  }
  cout << endl;
  d.erase(d.begin(),d.begin()+2);
  for(int i:d){
    cout << i << " "; 
  }
}
