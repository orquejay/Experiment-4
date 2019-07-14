#include <iostream>
#include <conio.h>

using namespace std;

int addition (int a, int b)
{
	int A;
	
	A = a + b;

	return A;
}

int subtraction (int a, int b)
{
	int S;

	S = a - b;

	return S;
}

int multiplication (int a, int b)
{
	int M;

	M = a * b;

	return M;
}

int division (int a, int b)
{
	int D;

	D = a / b;

	return D;
}

int modulo (int a, int b)
{
	int Mo;

	Mo = a % b;

	return Mo;
}

int main()
{
	bool program = false;
	
	do
	{
		int Add, Sub, Mul, Div, Mod, choice, a, b;
		char termination;

		cout << "Calculator Menu" << endl;

		cout << "\n\t1. Add";
		cout << "\n\t2. Subtract";
		cout << "\n\t3. Multiply";
		cout << "\n\t4. Divide";
		cout << "\n\t5. Modulus";

		cout << "\n\nEnter your choice: ";
		cin >> choice;

		switch (choice)
		{
			case 1:
			{
				cout << "\nEnter your first addend: ";
				cin >> a;
				cout << "Enter your second addend: ";
				cin >> b;

				Add = addition(a, b);

				cout << "\nResult: " << Add;

				break;
			}
	
			case 2:
			{
				cout << "\nEnter your minuend: ";
				cin >> a;
				cout << "Enter your subtrahend: ";
				cin >> b;

				Sub = subtraction(a, b);

				cout << "\nResult: " << Sub;
	
				break;
			}

			case 3:
			{
				cout << "\nEnter your multiplicand: ";
				cin >> a;
				cout << "Enter your multiplier: ";
				cin >> b;

				Mul = multiplication(a, b);

				cout << "\nResult: " << Mul;
	
				break;
			}

			case 4:
			{
				cout << "\nEnter your dividend: ";
				cin >> a;
				cout << "Enter your divisor: ";
				cin >> b;

				Div = division(a, b);

				cout << "\nResult: " << Div;

				break;
			}

			case 5:
			{
				cout << "\nEnter your dividend: ";
				cin >> a;
				cout << "Enter your divisor: ";
				cin >> b;

				Mod = modulo(a, b);

				cout << "\nResult: " << Mod;

				break;
			}

			default:
			{
				cout << "\n\nInvalid Input";
				break;
			}
		}

		cout << "\n\nContinue? (y/n): ";
		cin >> termination;
		
		switch (termination)
		{
			case 'y':
			case 'Y':
			{
				program = false;
				cout << "\n\n";
				break;
			}

			case 'n':
			case 'N':
			{
				program = true;
				cout << "\nThank you";
				break;
			}

			default:
			{
				program = false;
				break;
			}
		}
	} while (!program);
	

	_getch();
	return 0;
}