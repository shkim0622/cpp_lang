#include <iostream>
#include <map>

using namespace std;

template <typename K, typename V>
void print_map(const map<K, V>& m) {
  for (const auto &kv : m) {
  	cout << kv.first << " " << kv.second <<endl;
  }
}

template <typename K, typename V>
void search_and_print(map<K, V> &m, K key) {
  auto itr = m.find(key);
  if (itr != m.end()) {
    cout << key << " --> " << itr->second << endl;
  } else {
    cout << key << " not listed " << endl;
  }
}

int main() {
  map<int, int> num_list;

  num_list[1] = 10;
  num_list[2] = 20;
  num_list[3] = 30;
  num_list[4] = 40;
  num_list[5] = 50;
  num_list[6] = 60;

  print_map(num_list);
  cout << "-----------------" << endl;

  search_and_print(num_list, int(1));
  search_and_print(num_list, int(3));
  search_and_print(num_list, int(7));
}
