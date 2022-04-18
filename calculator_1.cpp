#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	float b;
	char x;
	cout << "Enter First Number" << endl;
	cin >> a;
	cout << "Enter an operand" << endl;
	cin >> x;
	cout << "Enter Second Number" << endl;
	cin >> b;

switch (x)
{
	case '+':
		cout << ( a + b ) << endl;
			break;
	case '-':
		cout << ( a - b ) << endl;
			break;
	case '*':
		cout << ( a * b ) << endl;
			break;
	case '/':
		cout << ( a / b ) << endl;
			break;
}
cout << endl;
return 0;
}