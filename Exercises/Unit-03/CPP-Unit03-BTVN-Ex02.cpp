#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int soInput, soHangnghin, soHangtram, soHangchuc, soHangle; 
	int checksoInput, checkSoam;

  cout << "Input One number have three digits: ";
  cin >>  soInput;
  checkSoam = soInput;
//Check so am;
  if (soInput < 0)
	{
		soInput = soInput * -1;
		cout << "NumberInput is: -" << soInput << endl;
	}
	else
	{
		soInput = soInput * 1;
		cout << "NumberInput is: " << soInput << endl;
	}
  
//Check how many number input;
  checksoInput = log10(soInput) + 1;
  cout << "Number input has: " << checksoInput << " digit numbers." << endl;

//Chek nhap 4 chu so;
  if (checksoInput > 4)
  {
    cout << "Vui long nhap lai so co 4 chu so tro xuong!!";
  }
  else
  {
  if (checkSoam < 0)
	{
  cout << "Bang chu: Am ";
	}
	else
	{
  cout << "Bang chu: ";
	}

  soHangnghin = (soInput % 10000) / 1000;
	soHangtram = (soInput % 1000) / 100;
	soHangchuc = (soInput % 100) / 10;
	soHangle = soInput % 10;
  //cout << soHangnghin << " " << soHangtram << " " << soHangchuc << " " << soHangle << endl;

  switch (soHangnghin)
	{
	case 0: cout << "";
    break;
	case 1: cout << "Mot nghin ";
		break;
	case 2: cout << "Hai nghin ";
		break;
	case 3: cout << "Ba nghin ";
		break;
	case 4: cout << "Bon nghin ";
		break;
	case 5: cout << "Nam nghin ";
		break;
	case 6: cout << "Sau nghin ";
		break;
	case 7: cout << "Bay nghin ";
		break;
	case 8: cout << "Tam nghin ";
		break;
	case 9: cout << "Chin nghin ";
		break;
	}
  
	switch (soHangtram)
	{
	case 0: 
  {
    if (soHangnghin > 0)
    cout << "khong tram ";
    else cout << "";
  }
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
	{ if (soHangchuc == 0)
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
  }
	cin.get();
	return 0;
}

