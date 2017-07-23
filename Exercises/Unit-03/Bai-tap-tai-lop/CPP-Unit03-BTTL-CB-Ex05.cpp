#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int thamNienct, luongCB;
  float hesoLuong, luongPhaitra;

  cout << "Nhap vao tham nien cong tac (thang): ";
  cin >> thamNienct;
  luongCB = 650000;
  hesoLuong = 0;
  if (thamNienct < 12)
    hesoLuong = 1.92;
  else if ((thamNienct >= 12) && (thamNienct < 36))
    hesoLuong = 2.34;
  else if ((thamNienct >= 36) && (thamNienct < 60))
    hesoLuong = 3;
  else if (thamNienct >= 60)
    hesoLuong = 4.5;
  else
  {
    cout << "Nhap lai Tham nien cong tac: ";
  }
  luongPhaitra = hesoLuong * luongCB;
  cout << "Luong phai tra: " << fixed << luongPhaitra << endl;
  cin.get();
  return 0;
}
