#include <iostream>

using namespace std;

void swap(int &a, int &b){
	int t = b;
	b = a;
	a = t;
}

int main()
{
	cout << "hello world/n";
	return 0;
}
