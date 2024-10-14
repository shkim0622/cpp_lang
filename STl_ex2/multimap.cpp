#include <iostream>
#include <map>

using namespace std;

template <typename K, typename V>
void print_map(const multimap<K, V> &m) {
  for (const auto &kv : m) {
    cout << kv.first << " " << kv.second << endl;
  }
}

int main() {
  multimap<int, int> m;
  m.insert(make_pair(1, 10));
  m.insert(std::make_pair(1, 20));
  m.insert(std::make_pair(4, 30));
  m.insert(std::make_pair(4, 40));
  m.insert(std::make_pair(3, 50));

  print_map(m);

  cout << "--------------------" <<endl;
  cout << m.find(1)->second <<endl;
}
