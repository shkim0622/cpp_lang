#include <iostream>
#include <set>

using namespace std;

template <typename T>

void print_set(set<T> &s)	{

	for(typename set<T>::iterator itr =s.begin(); itr != s.end(); itr++)	{
		cout << *itr << endl;
	}
}

int mian ()	{
	set<int> s;
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);
	s.insert(60);

	cout << "Sort " << endl;
	print_set(s);
	
	cout << "Is 20 inclusive ?" << endl;
	auto itr =s.find(20);
	if (itr != s.end())	{
		cout << "yes" << endl;
	} else	{
		cout<< "no" << endl;
	}

	cout << "Is 25 inclusive ? " << endl;
	itr = s.find(25);
	if (itr != s.end())	{
		cout << "yes" << endl;
	} else	{
		cout<< "no" << endl;

	}
return 0;
}

	
