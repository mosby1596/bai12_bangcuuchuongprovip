// bai12_bangcuuchuongprovip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "bang cuu chuong:";
	for (int i = 0; i < 10; i++)
	{
		for (int so = 2; so < 10; so++) {
			cout << so << "x" << i << "=" << so * i << "\t";
		}
	}
	cout << endl;
}


