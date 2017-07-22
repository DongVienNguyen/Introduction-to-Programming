#include <iostream>
using namespace std;
int main() {
	int so2, checkSo2, soHangtram, soHangchuc, soHangle;
	cout << "Input One number have two digits: "; cin >> so2;
	/*if (so2 < 0)
	{
		so2 = so2 * -1;
	}*/
	if (so2 < 0)
	{
		so2 = so2 * -1;
		cout << "Number character is: -" << soHangtram << soHangchuc << soHangle << " Bang chu: am ";
	}
	else
	{
		so2 = so2;
		cout << "Number character is: " << soHangtram << soHangchuc << soHangle << " Bang chu: ";
	}
	soHangtram = so2 / 100;
	checkSo2 = so2 / 10;
	soHangchuc = (so2 / 10) - (soHangtram * 10);
	soHangle = so2 % 10;

	switch (soHangtram)
	{
	case 0: cout << "";
		break;
	case 1: cout << "Mot tram ";
		break;
	case 2: cout << "Hai tram ";
		break;
	case 3: cout << "Ba tram ";
		break;
	case 4: cout << "Bon tram ";
		break;
	case 5: cout << "Nam tram ";
		break;
	case 6: cout << "Sau tram ";
		break;
	case 7: cout << "Bay tram ";
		break;
	case 8: cout << "Tam tram ";
		break;
	case 9: cout << "Chin tram ";
		break;
	}
	
	switch (soHangchuc)
	{
	case 0: 
		if ((soHangchuc == 0) && (soHangtram == 0))
		cout << "";
		else
		{
			cout << "le ";
		}
		break;
	case 1: cout << "Muo`i ";
		break;
	case 2: cout << "Hai muoi ";
		break;
	case 3: cout << "Ba muoi ";
		break;
	case 4: cout << "Bon muoi ";
		break;
	case 5: cout << "Nam muoi ";
		break;
	case 6: cout << "Sau muoi ";
		break;
	case 7: cout << "Bay muoi ";
		break;
	case 8: cout << "Tam muoi ";
		break;
	case 9: cout << "Chin muoi ";
		break;
	}

	switch (soHangle)
	{
	case 0: cout << "Khong";
		break;
	case 1: cout << "Mot";
		break;
	case 2: cout << "Hai";
		break;
	case 3: cout << "Ba";
		break;
	case 4: cout << "Bon";
		break;
	case 5: 
	{ if (checkSo2 == 0)
		cout << "nam";
	else
	{
		cout << "lam";
	}
	}
		break;
	case 6: cout << "Sau";
		break;
	case 7: cout << "Bay";
		break;
	case 8: cout << "Tam";
		break;
	case 9: cout << "Chin";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}


