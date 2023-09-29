#include <iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> v;
  // Capacity is memory allocated
  cout << "Capacity ->" << v.capacity() << endl;
  v.push_back(1);
  cout << "Capacity ->" << v.capacity() << endl;
  v.push_back(2);
  cout << "Capacity ->" << v.capacity() << endl;
  v.push_back(3);
  cout << "Capacity ->" << v.capacity() << endl;

  cout << "Size ->" << v.size() << endl;
  //Accessing the elements
  cout << "Element at place 2 is "<<v.at(2) << endl;

  cout << "1st element -> " << v.front() << endl;
  cout << "last element -> " << v.back() << endl;

  cout << "before pop " << endl;
  for(int i:v){
    cout << i << " ";
  }
  cout << endl;
  v.pop_back();
  cout << "after pop "<< endl;
  for(int i:v){
    cout << i << " ";
  }
  v.clear();
  cout << v.size() <<endl;

  // copy vector
  vector <int> temp (5,2);
  vector <int> last(temp);
  for(int i:last){
    cout << i << " ";
  }
  
  
}
