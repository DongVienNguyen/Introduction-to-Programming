//Giai phuong trinh bac 4: ax^4 + bx^2 + c = 0;
/* ax^4 + bx^2 + c = 0
B1: nhập dữ liệu
B2: xử lý
đặt t = x^2 (t >= 0) thì pt trở thành dạng pt bậc 2
+ B2.1: Nếu a = 0 thì pt có dạng: bx + c = 0
+ B2.1.1: Nếu b = 0 thì pt có dạng: c = 0
+ B2.1.1.1: Nếu c = 0 thì pt vô số nghiệm
+ B2.1.1.2: Ngược lại thì pt vô  nghiệm
+ B2.1.2: Ngược lại thì x = -c/b
+ B2.2: Ngược lại: giải bình thường tính denta
B3: In kết quả
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, delta, t1, t2, x1, x2;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;
	if (a == 0)
	{
		cout << "Phuong trinh co dang: " << b << "x + " << c << " = 0." << endl;
		if (b == 0)
		{
			cout << " Phuong trinh co dang: " << c << " = 0." << endl;
			if (c == 0) cout << "Phuong trinh vo so nghiem" << endl;
			else cout << "Phuong trinh vo nghiem" << endl;
		}
		else
		{
			cout << "T1 = T2 = -c/b" << endl;
			t1 = t2 = ((-1.0 * c) / b);
			x1 = sqrt(t1);
			x2 = -1.0 * x1;
			cout << "Nghiem X1 la: " << x1 << endl;
			cout << "Nghiem X2 la: " << x2 << endl;
		}
	}


	else //a khac 0; giai pt bac 2;
	{
		cout << "Phuong trinh: " << a << "x^4 + " << b << "x^2 + " << c << " = 0." << endl;
		//Xu ly;
		delta = (b * b) - (4.0 * (a * c));
		cout << "Delta: " << delta << endl;
		if (delta > 0)
		{
			cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
			t1 = ((-1.0 * b) - sqrt(delta)) / (2.0 * a);
			t2 = ((-1.0 * b) + sqrt(delta)) / (2.0 * a);
			cout << "Nghiem T1: " << t1 << endl;
			cout << "Nghiem T2: " << t2 << endl;
			if (t1 < 0) cout << "Phuong trinh vo nghiem.";
			else
			{
				x1 = sqrt(t1);
				x2 = -1.0 * x1;
				cout << "Nghiem X1 la: " << x1 << endl;
				cout << "Nghiem X2 la: " << x2 << endl;
			}
			if (t2 < 0) cout << "Phuong trinh vo nghiem";
			else
			{
				x1 = sqrt(t2);
				x2 = -1.0 * x1;
				cout << "Nghiem X1 la: " << x1 << endl;
				cout << "Nghiem X2 la: " << x2 << endl;
			}
		}
	
		else if (delta == 0)
		{
		cout << "Phuong trinh co nghiem kep y1 = y2" << endl;
		t1 = t2 = (-1.0 * b) / (2.0 * a);
		if (t1 < 0) cout << "Phuong trinh vo nghiem.";
		else
		{
			x1 = x2 = sqrt(t1);
			cout << "Nghiem X1: " << x1 << endl;
			cout << "Nghiem X2: " << x2 << endl;
		}

		}
		else cout << "Phuong trinh vo nghiem." << endl;

  }
  cin.get();
	return 0;
}
