#include <iostream>
#include <conio.h>

using namespace std;

void sorting(int select)
{
	int i, j, temp, arr[100];
	
	cout << "\nEnter array elements: ";
	for (i = 0; i < select; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nYour data: ";
	for (i = 0; i < select; i++)
	{
		cout << arr[i] << " ";
	}
	
	for (i = 0; i < select; i++)
	{
		for (j = i + 1; j < select; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}

	cout << "\n\nSorted Data: ";
	for (i = 0; i < select; i++)
	{
		cout << arr[i] << " ";
	}

	_getch();
}

int main()
{
	int size;

	cout << "Selection Sorting" << endl;

	cout << "\n\nEnter array size: ";
	cin >> size;

	sorting (size);

	_getch();
	return 0;
}