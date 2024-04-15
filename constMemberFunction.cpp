//Other constant stuff...

//EX:

int main()
{
  CCircNum angle;
  CCircNum angle2(angle);

  //...

  return 0;
}

CircNum::CCircNum(CCircNum &obj)
{
  m_lower = obj.m_lover;
  m_upper = obj.m_upper;
  m_num = obj.m_num;

  obj.m_num = 5000;
}

CCircNum::CCircNum(const CCircNum &obj)
{
  m_lower = obj.m_lower;
  m_upper = obj.m_upper;
  m_num = obj.m_num;

  //obj.m_num = 5000; //ERROR!
}

//const member function
  //Place "const" after formal parameter list
  //const object can only call constant member functions

//Example of the first bullet point

class CCircNum
{
  private:
    int m_num;  //angle
    int m_lower;
    int m_upper;

  public;
    CCircNum(int value, int lower, int upper); //Type CTOR
    int GetValue() {return m_num;}
    void SetLimit(int lowVal, int hiVal) {m_lower = lowVal;
                                          m_upper = hiVal;
                                          SetValue(m_num); }
    void SetValue(int newVal);
};

class CCircNum
{
  private:
    int m_num; //angle
    int m_lower;
    int m_upper;

  public:
    CCircNum(int value, int lower, int upper); //Type CTOR
    int GetValue() const {return m_num}
    void SetLimit(int lowVal, int hiVal) {m_lower = lowVal;
                                          m_upper = hiVal;
                                          SetValue(m_num);}
};

class CCircNum
{
  private:
    int m_num; //angle
    int m_lower; 
    int m_upper;

  public:
    CCircNum(int value, int lower, int upper); //Type CTOR
    int GetValue() const;
    void SetLimit(int lowVal, int hiVal) {m_lower = lowVal;
                                          m_upper = hiVal;
                                          SetValue(m_num);}
    void SetValue(int newVal);
};

int CCircNum::GetValue() const
{
  //m_num = 5000; //ERROR!

  int myInt;

  myInt = 10;

  return m_num;
}

//Example of second bullet point

int main()
{
  const CCircNum angle(30, 0, 359);
  const CCircNum angle2; //This will stay with default values or garbage values

  //angle2.SetValue(150); //ERROR!

  cout << angle2.GetValue() << endl;

  CCircNum angle3;

  angle3.SetValue(130); //No ERROR!

  cout << angle3.GetValue() << endl;

  return 0;
}
