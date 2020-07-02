#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	char line[100];
	cin.getline(line, 100);

	int length = strlen(line);

	int collect = 0;
	for (int i = 0; i < length; i++)
	{
		if (isdigit(line[i]))
		{
			collect += line[i] - '0';
		}
	}
	if (collect == length)
	{
		cout << "Длина строки равна сумме цифровых значений\n";
	}
	else
	{
		cout << "Длина строки не равна сумме цифровых значений\n";
	}

	system("pause");
}
