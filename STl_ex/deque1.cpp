#include <iostream>
#include <deque>

using namespace std;

template <typename T>

void print_deque(deque<T> &dq)	{

	for (int elem : dq)	{
		cout << elem << endl;
	}
}

int main()	{
	deque<int> dq;
	dq.push_back(10);
	print_deque(dq);
	cout<<"----------"<<endl;
	
	dq.push_back(20);
	print_deque(dq);
	cout<<"----------"<<endl;

	dq.push_front(30);
	print_deque(dq);
	cout<<"----------"<<endl;

	dq.push_front(40);
	print_deque(dq);
	
	cout<<"Delete fist number "<<endl;
	dq.pop_front();
	print_deque(dq);
}


