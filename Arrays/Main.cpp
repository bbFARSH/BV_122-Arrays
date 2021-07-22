#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		bool already_there = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				already_there = true;
				break;
			}
		}
		if (already_there)continue;
		int count = 1;
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])count++;
		}
		if (count > 1)printf("Значение %d встречается %d раз\n", arr[i], count);
	}
}