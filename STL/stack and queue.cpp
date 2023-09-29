#include <iostream>
#include<stack>
#include<queue>
using namespace std;
int main() {
  stack<string> s;
  s.push("Archita");
  s.push("Sinha");
  s.push("Riya");
  cout << "Top element " << s.top() << endl;
  s.pop();
  cout << "Top element " << s.top() << endl;
  cout << "Empty or not -> " << s.empty() << endl;
  // Queue
  queue<string> q;
  q.push("Madhu");
  q.push("Sinha");
  q.push("Hello");

  cout << "First ->" << q.front() << endl;
  cout << "Last ->" << q.back() << endl;
  q.pop();
  cout << "First ->" << q.front() << endl;
  
  
  
  
}
