// Giai phuong trinh: ax^2 + bx + c = 0;

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, delta, x1, x2;
	cout << "Nhap so a: ";
	cin >> a;
	//Xet a > 0;
	if (a == 0) cout << "Phuong trinh khong hop le. Nhap a khac 0!" << endl;
	else
	{
		cout << "Nhap so b: ";
		cin >> b;
		cout << "Nhap so c: ";
		cin >> c;
		cout << "Phuong trinh: " << a << "x^2 + " << b << "x + " << c << " = 0." << endl;
	}

	//Xu ly;
	delta = (b * b) - (4.0 * (a * c));
  cout << "Delta: " << delta << endl;
	if (delta > 0)
	{
		cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
		x1 = ((-1.0 * b) - sqrt(delta)) / (2.0 * a);
		x2 = ((-1.0 * b) + sqrt(delta)) / (2.0 * a);
    cout << "Nghiem X1: " << x1 << endl;
    cout << "Nghiem X2: " << x2 << endl;
	}
	else if (delta == 0)
	{
		cout << "Phuong trinh co nghiem kep x1 = x2" << endl;
		x1 = (-1.0 * b) / (2.0 * a);
		x2 = x1;
    cout << "Nghiem X1: " << x1 << endl;
    cout << "Nghiem X2: " << x2 << endl;
	}
	else cout << "Phuong trinh vo nghiem." << endl;
	cin.get();
	return 0;
}

