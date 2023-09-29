#include <iostream>
#include<list>
using namespace std;
int main() {
  list <int> l;
  l.push_back(1);
  l.push_front(2);
  for(int i: l){
    cout << i << " ";
  }
  l.erase(l.begin());
  cout << "after erase" << endl;
  for(int i: l){
    cout << i << " " << endl;
  }
  cout << "size of list ->" << l.size() << endl;
  list <int> li(5,100);
  cout << "Printing lis" << endl;
  for(int i: li){
    cout << i << " ";
  }
  
}
