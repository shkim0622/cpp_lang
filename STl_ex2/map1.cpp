#include <iostream>
#include <map>
#include <string>
using namespace std;

template <typename K, typename V>
void print_map(map<K, V>& m) {
 
  for (auto itr = m.begin(); itr != m.end(); ++itr) {
    cout<< itr->first << " " << itr->second << endl;
  }
}

int main() {
  map<string, int> color_list;

  
  color_list.insert(pair<string, int>("red", 1)); //pair

  color_list.insert(make_pair("white", 2)); //make_pair

  color_list["black"] = 3; // not insert

  print_map(color_list);

  cout << "red number :: " << color_list["red"] << endl;
}
