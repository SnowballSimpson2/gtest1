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

int bigger(int a, int b){
	return a>b?a:b;	
}

int main()
{
	cout << swap(1,2);
	return 0;
}
