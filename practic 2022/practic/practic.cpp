#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");
    int n;
    cout << "Введіть число n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) 
        {
            cout << "Дільник: " << i << endl;
        }
    }
    return 0;
}
