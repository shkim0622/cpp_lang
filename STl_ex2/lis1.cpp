#include <iostream>
#include <list>

using namespace std;

template <typename T>

void print_list(list<T> &lis)	{
	for (const auto &elem : lis)	{
		cout << elem << endl;
	}
}
int main ()	{
	list<int> lis;
	
	lis.push_back(10);
	lis.push_back(20);
	lis.push_back(30);
	lis.push_back(40);
	cout<< "First state" <<endl;
	print_list(lis);

	for (list<int> :: iterator itr = lis.begin(); itr != lis.end(); itr++)	{
		if (*itr ==20)	{
			lis.insert(itr, 50);
		}
	}
	cout<< "--------------"<<endl;
	cout << " Add 50 before 20" <<endl;
	print_list(lis);

	for (list<int> :: iterator itr = lis.begin(); itr != lis.end(); itr++)	{
	if (*itr == 30)	{
		lis.erase(itr);
		break;
		}
	}
cout<< "--------------"<<endl;
cout<< " 30 delete"<<endl;
print_list(lis);
}
