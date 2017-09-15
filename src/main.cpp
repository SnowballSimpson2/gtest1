#include <iostream>

using namespace std;

// swap integers
void swap(int &a, int &b){
	int t = b;
	b = a;
	a = t;
}

int bigger(int a, int b){
	return a>b?a:b;	
}

int main()
{
	cout << "hello world/n";
	return 0;
}
