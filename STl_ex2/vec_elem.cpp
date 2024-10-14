#include <iostream>
#include <vector>

using namespace std;

template <typename T>

void print_vector(vector<T> &vec)	{
	for(typename vector<T> :: iterator itr = vec.begin(); itr != vec.end(); itr++)
	cout << *itr <<endl;
}

void print_vector_range_based(vector<T> &vec)	{
	for (const auto &elem : vec)	{
		cout << elem <<endl;
	}
}

int main()	{
	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	cout << "print_vector" <<endl;
	print_vector (vec);

	
	cout<< "-------------" <<endl;
	
	cout << "print_vector_range_based" <<endl;
	print_vector_range_based(vec);
} 
