#include <iostream>
#include <iomanip>
using namespace std;

int main;
int day;
int year;

Date myDate;


struct Date //tag name
{
  int month;
  int day;
  int year;
}

//Note: Allocates no space!!!

int main()
{
  Date myDate;

  myDate.month = 3;
  myDate.day = 18;
  myDate.year = 2024;

  //mm/dd/yyyy

  cout << myDate.month << '/' 
       << myDate.day << '/' 
       << myDate.year << endl;

  //3/18/2024

  return 0;
}



struct Time
{
  int hours;
  int mins;
  int secs;
} myTime1, myTime2;

Struct Time
{
  int hours;
  int mins;
  int secs;
}
struct Car
{
  double mileage;
  int    hpower;
  char   make[256];
  char   model[256];
}



//Old Way:
double car1_mileage;
double car2_mileage;
double car3_mileage;
int car1_hpower;
int car2_hpower;
//...

//New Way:
Car car1;
Car car2;
Car car3;


//Ex:
struct Date;
{
  int month;
  int day;
  int year;
}

Date CalcNextDay(Date dateVal);

Date CalcNextDay(Date dateVal)
{
  int maxDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (dateVal.day != maxDays[dateVal.month - 1])
  {
    ++dateVal.day;
  }
  else if (dateVal.month == 12)
  {
    dateVal.day = dateVal.month = 1;
    ++dateVal.year;
  }
  else
  {
    dateVal.day = 1;
    ++dateVal.month;
  }

  return dateVal;
}

int main()
{
  Date myDate;

  cout << "Enter month, day, and year: ";
  cin >> myDate.month >> myDate.day >> myDate.year;

  myDate = CalcNextDay(myDate);

  cout << myDate.month << '/'
        << myDate.day << '/'
        << myDate.year << endl;

  return 0;
}
