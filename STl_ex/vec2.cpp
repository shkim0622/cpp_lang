#include <iostream>
#include <vector>

using namespace std;

int main()	{
	vector<double> v3(2);
	vector <double> v1 = {10.2,10.3};
	vector <double> v2 = {20.2,20.3};
	v3[0] = v1[0]+v2[0];
	v3[1] = v1[1]+v2[1];
	for(const auto itr : v1) {
		cout << itr<< endl; //10.2 10.3
	}
	for(const auto itr : v2) {
		cout << itr << endl; //20.2 20.3
	}

		cout << v3.at(0) << endl; 
		cout << v3.at(1) << endl; 

	return 0;
}




