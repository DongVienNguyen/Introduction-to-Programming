#include <iostream>
using namespace std;
int main()
{
  int soA, soB, soC, soD, soMax, soMin;
  cout << "Nhap vao so A: ";
  cin >> soA;
  cout << "Nhap vao so B: ";
  cin >> soB;
  cout << "Nhap vao so C: ";
  cin >> soC;
  cout << "Nhap vao so D: ";
  cin >> soD;

  soMax = soA;
  if (soB > soMax) soMax = soB;
  else if (soC > soMax) soMax = soC;
  else if (soD > soMax) soMax = soD;
  else soMax = soA;
  
  soMin = soD;
  if (soB < soMin) soMin = soB;
  else if (soC < soMin) soMin = soC;
  else if (soA < soMin) soMin = soA;
  else soMin = soD;

  cout << "So lon nhat la: " << soMax << endl;
  cout << "So nho nhat la: " << soMin << endl;

  cin.get();
  return 0;
}

