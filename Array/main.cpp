#include <iostream>
using namespace std;

//#define TASK_2
#define TASK_3
//#define TASK_4
//#define TASK_5
 
void main() 
{
//TASK_1 - https://github.com/Necromastery1/Hello, git@github.com:Necromastery1/Elochka.git, git@github.com:Necromastery1/dataTypes.git.
#ifdef TASK_2
	setlocale(LC_ALL, " ");
	int summa = 0;
	const int n = 5;
	int arr[n];
	int index_max = 0; 
	int index_min = 0;
	cout << "������� �������� 1 ��������: "; cin >> arr[0];
	cout << "������� �������� 2 ��������: "; cin >> arr[1];
	cout << "������� �������� 3 ��������: "; cin >> arr[2];
	cout << "������� �������� 4 ��������: "; cin >> arr[3];
	cout << "������� �������� 5 ��������: "; cin >> arr[4];

	cout << "\n\n\t������ ������: \n\n " << "\t" << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t" << arr[3] << "\t" << arr[4] << "\t" << endl;
	cout << "\n\n\t������ ������ � �������� �������:\n\n ";
	for (int i = 4; i >= 0; i--)
	{
		cout << "\t" << arr[i];
	}
	cout << "\n\n\n\tC���� ��������� �������: ";
	
	for (int i = 0; i < n; i++)
		summa = summa + arr[i];
	cout << summa << endl;

	cout << "\n\n\n\t������� ��������������: " << summa / n << endl;

	int max_elem = arr[0]; 
	int min_elem = arr[0]; 
	for (int j = 0; j < n; j++)
	{
		if (max_elem < arr[j])
		{
			max_elem = arr[j];
			index_max = j;
		}
		if (min_elem > arr[j])
		{
			min_elem = arr[j];
			index_min = j;
		}
	}
	cout << "������������ �������� = " << max_elem << ", ��� ������ = " << index_max << "\n";
	cout << "����������� �������� = " << min_elem << ", ��� ������ = " << index_min << "\n" << endl;
#endif
#ifdef TASK_3

	setlocale(LC_ALL, " ");
	const int n = 10;
	int arra[n] = {1,2,3,4,5,6,7,8,9,10};  
	int t;
	//4, 5, 6, 7, 8, 9, 10, 1, 2, 3
	
	cout << "\n\n\t �������� ������:\n ";

	for (int i = 0; i < n; i++)
	{
		cout << "\t" << arra[i];
	}

	cout << "\n\n\t ������, ��������� �� 3 �������� �����:\n ";
	t = arra[0];
	for (int i = 0; i < n; i++)
	{
		arra[i] = arra[i + 3];
	}
	arra[n - 3] = t;
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << arra[i];
	}
	cout << endl;

#endif
#ifdef TASK_4
	int dec, bin = 0, j;

	cin >> dec;
	for (j = 0; dec > 0; j++)
	{
		bin += (dec % 2) * pow(10.0, j);
		dec /= 2;
	}

	cout << bin << endl;
#endif
#ifdef TASK_5
	int dec, bin = 0, j;

	cin >> dec;
	for (j = 0; dec > 0; j++)
	{
		bin += (dec % 2) * pow(16.0, j);
		dec /= 2;
	}

	cout << bin << endl;
#endif
   
}