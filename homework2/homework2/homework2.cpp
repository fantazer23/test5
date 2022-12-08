
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <functional>
#include <random>
#include <vector>
#include <stdio.h>


using namespace std;
/*
int main()
{
	int arr[10];
	rand();
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100 - rand() % 100;
		cout << "[" << arr[i] << "] ";
}
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
        }
		cout << "[" << arr[i] << "] ";
	}
	cout << "\n";
	return 0;
}



/*
int main()
{
	const int n = 5;
	int arr[n] = { 25,-4,55,65,-7 };
	int a, i, k;
	cout << "\n  arr[n]\n" << endl;
	for (i = 0, i < n;i++;)
	{
		cout << "arr[n]" << endl;

	}
}
* 
*/


/*
* 
int main()
{
	int ar[100], s = 0, i;
	for (i = 0; i < 100; i++)
		ar[i] = rand() % 100-50;

	for (i = 0; i < 98; i++)
		if ((ar[i + 1] > ar[i]) && (ar[i + 2] < ar[i + 1]))//была опечатка
			s += 1;

	for (i = 0; i < 100; i++)
	printf("%d, ", ar[i]);
	printf("\n%d", s);//правильно считает

	return 0;
}
*/


// шаблонний клас Матриця
template <typename T>
class MATRIX
{
private:
    T** M; // матриця
    int m; // к-сть рядків
    int n; // к-сть стовпців

public:
    // конструктори
    MATRIX()
    {
        n = m = 0;
        M = nullptr; // необов'язково
    }

    // конструктор з двома параметрами
    MATRIX(int _m, int _n)
    {
        m = _m;
        n = _n;

        // Виділити пам'ять для матриці
        // Виділити пам'ять для масиву покажчиків
        M = (T**) new T * [m]; // к-сть рядків, к-сть покажчиків

        // Виділити пам'ять для кожного покажчика
        for (int i = 0; i < m; i++)
            M[i] = (T*)new T[n];

        // Заповнити масив M нулями
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                M[i][j] = 0;
    }

    // Конструктор копіювання - обов'язковий
    MATRIX(const MATRIX& _M)
    {
        // Створюється новий об'єкт для якого виділяється пам'ять
        // Копіювання даних *this <= _M
        m = _M.m;
        n = _M.n;

        // Виділити пам'ять для M
        M = (T**) new T * [m]; // к-сть рядків, к-сть покажчиків
        for (int i = 0; i < m; i++)
            M[i] = (T*) new T[n];

        // заповнити значеннями
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                M[i][j] = _M.M[i][j];
    }

    // методи доступу
    T GetMij(int i, int j)
    {
        if ((m > 0) && (n > 0))
            return M[i][j];
        else
            return 0;
    }

    void SetMij(int i, int j, T value)
    {
        if ((i < 0) || (i >= m))
            return;
        if ((j < 0) || (j >= n))
            return;
        M[i][j] = value;
    }

    // метод, що виводить матрицю
    void Print(const char* ObjName)
    {
        cout << "Object: " << ObjName << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << M[i][j] << "\t";
            cout << endl;
        }
        cout << "---------------------" << endl << endl;
    }

    // оператор копіювання - обов'язковий
    MATRIX operator=(const MATRIX& _M)
    {
        if (n > 0)
        {
            // звільнити пам'ять, виділену раніше для об'єкту *this
            for (int i = 0; i < m; i++)
                delete[] M[i];
        }

        if (m > 0)
        {
            delete[] M;
        }

        // Копіювання даних M <= _M
        m = _M.m;
        n = _M.n;

        // Виділити пам'ять для M знову
        M = (T**) new T * [m]; // к-сть рядків, к-сть покажчиків
        for (int i = 0; i < m; i++)
            M[i] = (T*) new T[n];

        // заповнити значеннями
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                M[i][j] = _M.M[i][j];
        return *this;
    }

    // Деструктор - звільняє пам'ять, виділену для матриці
    ~MATRIX()
    {
        if (n > 0)
        {
            // звільнити попередньо виділену пам'ять для кожного рядка
            for (int i = 0; i < m; i++)
                delete[] M[i];
        }

        if (m > 0)
            delete[] M;
    }
};

void main()
{
    // тест для класу MATRIX
    MATRIX<int> M(2, 3);
    M.Print("M");

    // Заповнити матрицю значеннями за деякою закономірністю
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            M.SetMij(i, j, i + j);

    M.Print("M");

    MATRIX<int> M2 = M; // виклик конструктора копіювання
    M2.Print("M2");

    MATRIX<int> M3; // виклик оператора копіювання - перевірка
    M3 = M;
    M3.Print("M3");

    MATRIX<int> M4;
    M4 = M3 = M2 = M; // виклик оператора копіювання як "ланцюжка"
    M4.Print("M4");
}








	



  