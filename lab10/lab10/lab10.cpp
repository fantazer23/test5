#include <iostream>
#include <cmath>
using namespace std;

/* Номер 1(1)
*
int main()
{
	setlocale(LC_ALL, "");
	int R,S,C;
	cout << "Введите радиус окружности:";
	cin >> R;
	S= 3.14 * R * R;
	C = 2 * R;
	cout << "Площадь круга = "  <<endl;
	cout << "Периметр круга = " <<endl;
	return 0;
}
*/


/*Номер 1(2)
int main()
{
	setlocale(LC_ALL, "");
	const int g = 9.81;
	int h,t,c;
	cin >> t;
	cin >> h;
	if (t = 2)
	{
		c = (h+ g * sqrt((t)) / 2);
	cout << "пройденний шлях за 2\n" <<c<< endl;
	}
	if (t = 1)
	{
		c = (h+g * sqrt((t)) / 2);
	cout << "пройденний шлях за 1\n" <<c<< endl;
	}
}
*/



/*Номер 16
*
int main()
{
	int topa;
	int topb;
	int topc;
	int i;

	topa= { 0, 0 };
	topb = { i, i-1};
	topc = { -i, i+1};
	float p = (topa.length(topb + topa.length(topc) + topb.length(topc)) / 2;
	float S = sqrt(p * (p - topa.length(topb)) * (p - topa.length(topc)) * (p - topb.length(topc)));
	float h = topa * topb / sin(topa);
	cout << "p= " << p << endl;
	cout << "S= " << S << endl;
	return 0;
}
*/
/* Завдання 3 номер 16
*
int main()
{
	setlocale(LC_ALL, "");
	int Z1;
	int Z2;
	int x;
	int y;
	cout << "Z1=pow(x,2)+2*x-3+(x+1)*sqrt(pow(x,2)-9)/pow(x,2)-2*x-3+(x-1)*sqrt(pow(x,2)-9)\n";
	cout << "Z2=sqrt(x+3/x-3)\n";
	cin >> x;
	cin >> y;
	Z1 = pow(x, 2) + 2*x - 3 + (x + 1) * sqrt(pow((double)x, 2) - 9) / pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow((double)x, 2) - 9);
	Z2 = sqrt(x + 3 / x - 3);
	cout << "Z1" << Z1 << endl;
	cout << "Z2" << Z2 << endl;
	if (Z1 == Z2)
	{
		cout << "правда" << endl;
	}
	else
	{
		cout << "брехня " << endl;
	}
   return 0;
}
*/
/*Завдання 4 номер 16
int main()
{
		setlocale(LC_ALL, "");
		const double M = 3.8;
		double y,x, t,e,p;
		cout<< "1\n" << "2\n" << "3\n"<<endl;
		cout<< "Enter p ->" << endl;
		cin>>p;
		y = abs(x + t);
		x = pow(t,2) + p;
		t = pow(e, M + 1);
		cout << "y= " << y << "x=" << x << "t"<<t<<endl;

	return 0;
}
*/
/*Завдання 5 номер 16
int main()
{
	setlocale(LC_ALL, "");
	double x;
	double y;
	double n;
	double res;
	cout << "x+0,5*n+4.8/cos(y)" << endl;
	cout << "Enter x --> ";
	cin >> x;
	cout << "Enter y --> ";
	cin >> y;
	cout << "Enter n --> ";
	cin >> n;
	res = x + 0.5 * n + 4.8 / cos(y) ;
	cout << res;
}
*/