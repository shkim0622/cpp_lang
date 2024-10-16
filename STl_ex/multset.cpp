#include <iostream>
#include <set>

using namespace std;

template <typename K>
void print_set(const multiset<K> &s) {
  for (const auto &elem : s) {
    cout << elem << endl;
  }
}

int main() {
  multiset<int> s;

  s.insert(2);
  s.insert(3);
  s.insert(5);
  s.insert(4);
  s.insert(4);
  s.insert(1);

  print_set(s);
}
