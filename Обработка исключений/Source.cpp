#include<iostream>
using namespace std;

/*
* ���������� ����������
*/

/*
* try-��������������
* {
*	������� ���� ��� ����� ���� �������� ����������
*	throw ��������� ������������� ����- ���������� ����������
* }
* 
*	catch(��� ���������� ���)-����� ���������� ���������� � �����������
*	{
*		���� �������
*	}
*/



int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\n�����!\n";
	try
	{
		cout << "\n�����\n";
		throw 100;
		cout << "\n�����\n";
	}
	catch (int g)
	{
		cout << "\n����������� ����������\n";
	}
	cout << "\n����\n";

	try
	{
		float a, b;
		cout << "\n������� ������ ��������\n";
		cin >> a;
		cout << "\n������� ������ ��������\n";
		cin >> b;
		if (b == 0)
		{
			throw b;
		}
		cout << "\n��������� = " << (a / b) << "\n\n";
	}
	catch (float g)
	{
		cout << "\n������ ������ �� " << g << "\n\n";
	}


	try
	{
		int* ptr = 0;
		int size;
		cout << "\n������� ������\n";
		cin >> size;
		if (size < 1 || size>500)
		{
			throw "\n\n������ �������\n\n";
		}
		ptr = new int[size];
		//ptr = 0;
		if (!ptr)
		{
			throw "\n\n������ ��������� ������\n\n";
		}
		int a;
		cout << "\n������� ��������\n";
		cin >> a;
		if (a == 0)
		{
			throw a;
		}
	}
	catch (int s)
	{
		cout << "\nError - A=" << s << "\n\n";
	}
	catch (const char* s)
	{
		cout << s << "\n\n";
	}
	catch (...)
	{
		cout << "\n������\n";
	}

	return 0;
}