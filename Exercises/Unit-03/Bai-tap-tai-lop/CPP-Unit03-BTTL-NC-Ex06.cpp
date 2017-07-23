#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int hoursBegin, hoursEnd, minBegin, minEnd;
  cout << setw(70) << "****Wellcomme Karaoke****" << endl;
cout << setw(50) << "Input hours Begin: "<< setw(10);
cin >> hoursBegin;
if ((hoursBegin >= 8) && (hoursBegin < 24))
  cout << setw(50) << "****Continue Input minutes Begin Karaoke: " << endl;
else 
{
  cout << setw(50) << "Input faulse, please try again!" << endl;
  return(0);
}
  //
cout << setw(50) << "Input minutes Begin: "<< setw(10);
cin >> minBegin;
if ((minBegin >= 0) && (minBegin < 60))
  cout << setw(50) << "****Continue Input Hours End Karaoke: " << endl;
else 
{
  cout << setw(50) << "Input faulse, please try again!" << endl;
  return(0);
}
//
cout << setw(50) << "Input hours End: "<< setw(10);
cin >> hoursEnd;
if ((hoursEnd >= 8) && (hoursEnd <= 24))
  cout << setw(50) << "****Continue Input Minutes End Karaoke: " << endl;
else 
{
  cout << setw(50) << "Input faulse, please try again!" << endl;
  return(0);
}
//
cout << setw(50) << "Input minutes End: "<< setw(10);
cin >> minEnd;
if ((minEnd >= 0) && (minEnd < 60))
  cout << setw(50) << "****=============**** " << endl;
else 
{
  cout << "Input faulse, please try again!" << endl;
  return(0);
}
//Check times input;
if (((hoursBegin * 60) + minBegin) < ((hoursEnd * 60) + minEnd))
{
cout << setw(50) << "****Time begin with Karaoke**** " << endl;
  cout << setw(50) << "Times Begin Karaoke: " << hoursBegin << ":" << minBegin << endl << endl;
  cout << setw(50) << "Times End Karaoke: " << hoursEnd << ":" << minEnd << endl;
}
else 
{
  cout << "Input faulse, please try again!" << endl;
  return(0);
}

//Xu ly
int timesUsed, timesBegin, timesEnd, timesSale30, billUsed, billNotSale, billSale30, billSale10;

timesBegin = ((hoursBegin * 60) + minBegin);
timesEnd = ((hoursEnd * 60) + minEnd);
timesUsed = timesEnd - timesBegin;
billNotSale = timesUsed * 500;

//Cau a, b;
if (timesUsed > 180)
{
  timesSale30 = timesUsed - 180;
  billSale30 = (timesSale30 * 500) * 0.3;
}
else
{
  timesSale30 = 0;
  billSale30 = (timesSale30 * 500) * 0.3;
}

billUsed = billNotSale - billSale30;
//Cau c;
if ((hoursEnd <= 16) && (minEnd < 60)) billSale10 = billUsed * 0.1;
if (hoursEnd > 16) billSale10 = 0;

cout << setw(50) << "****Bill used Karaoke**** " << endl;
cout << setw(50) << "Times used is: " << setw(10) << timesUsed << endl;
cout << setw(50) << "Bill not sale is: " << setw(10) << billNotSale << endl;
cout << setw(50) << "Bill sale 30% is: " << setw(10) << billSale30 << endl;
cout << setw(50) << "Sum bill after sale 30% is: " << setw(10) << billUsed << endl;
cout << setw(50) << "Bill sale 10% is: " << setw(10) << billSale10 << endl;
cout << setw(50) << "Sum bill after sale 10% is: " << setw(10) << (billUsed - billSale10) << endl;
cin.get();
return 0;
}
