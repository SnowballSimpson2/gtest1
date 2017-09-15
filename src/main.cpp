#include <iostream>

using namespace std;

int sum(int a, int b){
	return a+b;
}


// swap integers
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
