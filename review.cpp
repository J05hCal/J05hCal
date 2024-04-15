//CDog.h

class CDog
{
  private:
    char m_name[256];
    int m_age;
    bool m_tricks; //true if the dog knows tricks

  public:
    //CTORS
    CDog();
    CDog(char name[], int age = 0, bool tricks = false);
    CDog(const CDog &obj);

    //Public Member Functions
    void SetName(char name[])        {strcpy(m_name);}
    void SetAge(int age)             {m_age = age;}
    void SetTricks(bool tricks)      {m_tricks = tricks;}
    void GetName(char name[]) const  {strcpy(name, m_name);}
    int GetAge() const               {return m_age;}
    bool GetTricks() const           {return m_tricks;}
    void DispInfo()const;

    //Overloaded Operators
    bool operator == (const CDog &rhs) const;
    bool operator>(const CDog &rhs) const;
};

//CDog.cpp

#include <iostream>
#include <cstring>
#include "CDog.h"
using namespace std;

CDog::CDog()
{
  cout << "Default CTOR\n";
  SetName("Max");
  SetAge(1);
  SetTricks(false);
}

CDog::CDog(char name[], int age, bool tricks)
{
  cout << "Type CTOR\n";
  SetName(name);
  SetAge(age);
  SetTricks(tricks);
}

CDog::CDog(const CDog &obj)
{
  cout << "Copy CTOR\n";
  strcpy(m_name, obj.m_name);
  SetAge(obj.m_age); //SetAge(obj.GetAge());
  SetTricks(obj.GetTricks());
}

void CDog::DispInfo() const
{
  cout << "Name: " << m_name << endl
       << "Age: " << GetAge() << endl
       << "Tricks: ";

  if (m_tricks == true)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
  }
}
