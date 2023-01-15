// functions with the same name.
//

#include <iostream>

using namespace std;

void menssage(int n) {
	cout << "Number: " << n << endl;
}

void menssage(char c) {
	cout << "character: " << c << endl;
}

int sum(int n1, int n2) 
{
	return n1 + n2;
}

int sum(int n1, int n2, int n3) 
{
	return n1 + n2 + n3;
}
int main()
{
	menssage(20);
	menssage('A');
	cout << sum(1, 2) << endl;
	cout << sum(1, 2, 3) << endl;

	return 0;
}


