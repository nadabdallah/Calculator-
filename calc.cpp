#include<iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation;
	float result;
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	cout << "Choose the Arithmetic Operation (+,-,*,/): ";
	cin >> operation;
	switch (operation)
	{
	case '+':
		result = num1 + num2;
		cout << "The summition of two numbers is: " << result << endl;
		break;

	case '-':
		result = num1 - num2;
		cout << "The subtraction of two numbers is: " << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << "The multiplication of two numbers is: " << result << endl;
		break;
	case '/':
		if (num2 == 0)
		{
			cout << "Error!, Please enter another number: ";
			cin >> num2;
			result = num1 / num2;
			cout << "The division of two numbers is: " << result << endl;
		}
		else
		{
			result = num1 / num2;
			cout << "The division of two numbers is: " << result << endl;
		}
		break;
	}
	system("pause");
	return 0;
}