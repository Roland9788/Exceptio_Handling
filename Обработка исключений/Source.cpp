#include<iostream>
using namespace std;

/*
* Обработчик исключений
*/

/*
* try-Контралировать
* {
*	область кода где может быть вызванно исключение
*	throw выражение определенного типа- генерирует исключение
* }
* 
*	catch(тип исключения имя)-Ловит конкретное исключение и анализирует
*	{
*		блок анализа
*	}
*/



int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\nСтарт!\n";
	try
	{
		cout << "\nПеред\n";
		throw 100;
		cout << "\nПосле\n";
	}
	catch (int g)
	{
		cout << "\nОбработанно исключение\n";
	}
	cout << "\nПока\n";

	try
	{
		float a, b;
		cout << "\nВведите первое значение\n";
		cin >> a;
		cout << "\nВведите второе значение\n";
		cin >> b;
		if (b == 0)
		{
			throw b;
		}
		cout << "\nРезультат = " << (a / b) << "\n\n";
	}
	catch (float g)
	{
		cout << "\nНельзя делить на " << g << "\n\n";
	}


	try
	{
		int* ptr = 0;
		int size;
		cout << "\nВведите размер\n";
		cin >> size;
		if (size < 1 || size>500)
		{
			throw "\n\nОшибка размера\n\n";
		}
		ptr = new int[size];
		//ptr = 0;
		if (!ptr)
		{
			throw "\n\nОшибка выделения памяти\n\n";
		}
		int a;
		cout << "\nВведите значение\n";
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
		cout << "\nОшибка\n";
	}

	return 0;
}