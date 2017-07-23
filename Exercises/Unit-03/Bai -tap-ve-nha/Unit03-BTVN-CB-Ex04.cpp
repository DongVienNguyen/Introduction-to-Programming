#include <iostream>
using namespace std;
int main()
{
	int ngay, thang, nam, namNhuan;
	cout << "Nhap vao thang: ";
	cin >> thang;
	cout << "Nhap vao nam: ";
	cin >> nam;
	namNhuan = 0;
	ngay = 0;
	if (((nam % 4) == 0) && ((nam % 100) != 0)) namNhuan = 1;
	if ((nam % 400) == 0) namNhuan = 1;
	if (namNhuan == 1) cout << "Do la nam nhuan." << endl;
	else cout << "Khong phai nam nhuan." << endl;
	//cout << "Co phai nam nhuan: " << namNhuan;
	switch (thang)
	{
	case 1: ngay = 31; break;
	case 3: ngay = 31; break;
	case 5: ngay = 31; break;
	case 7: ngay = 31; break;
	case 8: ngay = 31; break;
	case 10: ngay = 31; break;
	case 12: ngay = 31; break;
	case 4: ngay = 30; break;
	case 6: ngay = 30; break;
	case 9: ngay = 30; break;
	case 11: ngay = 30; break;
	case 2:
	{
		if (namNhuan == 1) ngay = 29;
		else ngay = 28;
	}
	break;
	default: 
  {
    cout << "Nhap lai thang:" << endl;
	  return 0;
  }  
    break;
	}
	cout << "Thang " << thang << " nam " << nam << " co " << ngay << " ngay." << endl;
  cin.get();
	return 0;
}
