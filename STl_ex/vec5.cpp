#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  
  for (int elem : vec)	{
	  cout <<" number : " << elem << endl;
  }
  return 0;
}

