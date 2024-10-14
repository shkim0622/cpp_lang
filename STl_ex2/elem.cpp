#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> v;
    v.push_back(1); v.push_back(2); v.push_back(3);
    v.push_back(4); v.push_back(5); v.push_back(6);
    v.push_back(7); v.push_back(8); v.push_back(9); v.push_back(10);
    
    cout << "ex1) Orginal for" << endl;
    cout << "for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)" << endl;
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter << endl;
    }
 
    cout << "-------------"<< endl;
    cout << "ex2) Range based for" << endl;
    cout << "for (int elem : v)" << endl;
    for (int elem : v)
    {
        cout << elem << endl;
    }
 
    cout << "------------"<<endl;
    cout << "ex3) Change the original for" << endl;
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        *iter += 10;
        cout << *iter <<endl;    
    }
    cout << "*************"<<endl;
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter <<endl;
    }
 
    cout << "-----------"<< endl;
    cout << "ex4) Change range based for" << endl;
    for (int elem : v)
    {
        elem += 100;
        cout << elem <<endl;
    }
   cout << "*************"<<endl; 
    for (int elem : v)
    {
        cout << elem <<endl;
    }
    return 0;
}

