#include<iostream>
using namespace std;


int main()
{
	int a[10], b;
	cout << "size of int = " << sizeof(b) << endl;
	cout << "size of array a = " << sizeof(a) << endl;
	cout << "address of a[0] = " << a << endl;
	cout << "address of a+1 = " << a+1 << endl;
	cout << "address of a[1] = " << &a[1] << endl;
	cout << &a << endl;
	return 0;
}