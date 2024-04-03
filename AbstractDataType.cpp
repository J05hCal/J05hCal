//An ADT is an object that contains data AND the function(s) to manipulate that data

//Old Way:
Data.h //"header file"

struct Date
{
  int month;
  int day;
  int year;
};

void GetDate(Date &dateRef);
void DisplayDate(Date &dateRef);

//contains information for the compiler
//no memory is allocated

Data.cpp

#include <iostream>
#include "Data.h" // " " reference to the header file
using namespace std;

void GetDate(Date &dateRef)
{
  cout << "Enter month: ";
  cin >> dataRef.month;

  cout << "Enter day: ";
  cin >> dataRef.day;

  cout << "Enter year: ";
  cin >> dataRef.year;
}

void DisplayDate(Date &dateRef)
{
  cout << "Date is "
       << dataRef.month << '/'
       << dataRef.day << '/'
       << dataRef.year << endl;
}

//New Way:
    
Date.h //"header file"

struct Date
{
  //"Date Members"
  int month;
  int day;
  int year;

  //"Member functions"
  void GetDate(Date &dateRef);
  void DisplayDate(Date &dateRef);
};

//Note: Member functions have direct access to the data
//members of the calling object.

void GetDate(Date &dateRef)
{
  cout << "Enter month: ";
  cin >> dataRef.month;

  cout << "Enter day: ";
  cin >> dataRef.day;

  cout << "Enter year: ";
  cin >> dataRef.year;
}

void Date::DisplayDate(void)
{
  cout << "Date is "
       << month << '/'
       << day << '/'
       << year << endl;
}

main.cpp

#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
  Date myDate;

  myDate.GetDate();

  myDate.DisplayDate();

  Date yourDate;

  return 0;
}

//Old Way:

Box.h

struct Box
{
  int width;
  int height;
};

//Function Prototypes
void SetWidth(Box &BoxRef, int width);
void SetHeight(Box &BoxRef, int height);
int GetArea(Box &BoxRef);

Box.cpp 

// We don't need to include "#include<iostream>" since we are not  
// using it 

#include "Box.h" 

void SetWidth(Box &BoxRef, int width) 
{ 
BoxRef.width = width; 
} 

void SetHeight(Box &BoxRef, int height)
{ 
BoxRef.height = height; 
} 

int GetArea(Box &BoxRef) 
{ 
return BoxRef.height * BoxRef.width; 
}

main.cpp 

#include <iostream> 
#include "Box.h" 
using namespace std; 

int main() 
{ 
Box    myBox; 

// Create a 5 x 3 box 

SetWidth(myBox, 5); 
SetHeight(myBox, 3); 

cout << "Area is: " << GetArea(myBox) << endl; 

return 0; 
}

//New Way 1: 

Box.h 
  
struct Box 
{ 
  private:
    int    m_width; 
    int    m_height; 
  public:
    void SetWidth(int width); 
    void SetHeight(int height); 
    int GetArea(void);
}; 

Box.cpp 
  
// We don't need to include "#include<iostream>" since we are not  
// using it 

#include "Box.h" 

void Box::SetWidth(int width) 
{ 
  m_width = width; 
} 

void Box::SetHeight(int height) 
{ 
  m_height = height; 
} 

int Box::GetArea(void) 
{ 
  return m_height * m_width; 
} 

main.cpp 

#include <iostream> 
#include "Box.h" 
using namespace std; 

int  main() 
{ 
  Box myBox; 

  // Create a 5 x 3 box 
  myBox.SetWidth(5); 
  myBox.SetHeight(3);

  myBox.SetHeight = -5; //NO ERROR! B/C have direct access

  cout << "Area is: " << myBox.GetArea() << endl; 

  return 0; 
} 

//New Way 2: 

Box.h 

class CBox 
{ 
  private:
    int m_width; 
    int m_height; 

  public:
    void SetWidth(int width); 
    void SetHeight(int height); 
    int  GetArea(void); 
}; 

//A structure is public by default
//A class is private by default

CBox.cpp 

// We don't need to include "#include<iostream>" since we are not  
// using it 

#include "CBox.h" 
#include <cmath> 

void CBox::SetWidth(int width) 
{ 
m_width = abs(width); 
} 

void CBox::SetHeight(int height) 
{ 
m_height = abs(height); 
} 

int CBox::GetArea(void) 
{ 
return m_height * m_width; 
} 

main.cpp 

#include <iostream> 
#include "CBox.h" 
using namespace std; 

int  main() 
{ 
Box    myBox; 

// Create a 5 x 3 box 
myBox.SetWidth(5); 
myBox.SetHeight(3) 

//myBox.m_width = -5;  // ERROR! No direct access 
  
cout << "Area is: " << myBox.GetArea() << endl; 

return 0; 
} 
