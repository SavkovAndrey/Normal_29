#include <iostream>
#include <time.h>
#include <string>
#include <vector>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	string str, temp;
	cout << "Enter the string: ";
	getline(cin, str);

	vector<int> number;
	int j = 0;                 // итератор для вектора чисел
	int sum = 0;

	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == ',' || str[i] == '\0')
		{
			
			number.push_back(0);
			number[j] = stoi(temp);
			j++;
			temp = "";
		}
		else
		{
			temp += str[i];
		}
	}

	for (int i = 0; i < number.size(); i++)
	{
		sum += number[i];
	}

	cout << "\nThe sum of the numbers is  " << sum << endl << endl;


	system("pause");
	return 0;
}
