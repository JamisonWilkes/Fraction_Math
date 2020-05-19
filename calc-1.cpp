#include <iostream>
#include "fraction-1.h"
using namespace std;

int main()
{
	char	choice;
	fraction	numerator;
	fraction	denominator;
	fraction	result;

	do
	{
		fraction f1;
		fraction f2;

		cout << ("A\tAdd\n");
		cout << "S\tSub\n";
		cout << "M\tMult\n";
		cout << "D\tDiv\n";
		cout << "E\tExit\n";

		cout << "\nChoice?: ";

		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 'A':
		case 'a':
			cout << "fraction #1: " << endl;
			cin >> f1;
			cout << "fraction #2: " << endl;
			cin >> f2;
			result = f1 + f2;
			cout << f1;
			cout << "+ ";
			cout << f2;
			cout << "= ";
			cout << result;

			break;

		case 'S':
		case 's':
			cout << "fraction #1 " << endl;
			cin >> f1;
			cout << "fraction #2 " << endl;
			cin >> f2;
			result = f1 - f2;
			cout << f1;
			cout << "- ";
			cout << f2;
			cout << "= ";
			cout << result;
			break;

		case 'M':
		case 'm':
			cout << "fraction #1 " << endl;
			cin >> f1;
			cout << "fraction #2 " << endl;
			cin >> f1;
			result = f1 * f2;
			cout << f1;
			cout << "* ";
			cout << f2;
			cout << "= ";
			cout << result;
			break;

		case 'D':
		case 'd':
			cout << "fraction #1 " << endl;
			cin >> f1;
			cout << "fraction #2 " << endl;
			cin >> f2;
			result = f1 / f2;
			cout << f1;
			cout << "/ ";
			cout << f2;
			cout << "= ";
			cout << result;
			break;

		case 'e':
		case 'E':
			break;

		default:
			cerr << "Unrecognized choice: " <<
				choice << endl;
			break;
		}
	} while (choice != 'e' && choice != 'E');

	return 0;
}
