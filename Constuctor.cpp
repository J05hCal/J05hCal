//A member function that is called automatically when space is allocated for an object.
//Syntax:
  //No return type! (Not even void)
  //Function identifier is the class tagname
//Purpose of the CTOR is to initialize objects


class CCircNum
{
  private:
    int m_num; //angle
    int m_lower;
    int m_upper;

  public:
    CCircNum(int value, int lower, int upper); //Type CTOR
    int GetValue() {return m_num; }
    void SetLimit(int lowVal, int hiVal) {m_lower = lowVal;
                                          m_upper = hiVal;
                                          SetValue(m_num); }
    void SetValue(int newVal);
};

void CCircNum::SetValue(int newVal)
{
  int range = m_upper - m_lower + 1; //+1 because of zero - based

  while (newVal > m_upper)
  {
    newVal += range;
  }

  m_num = newVal;
}

CCircNum::CCircNum(int value, int lower, int upper)
{
  m_lower = lower;
  m_upper = upper;
  SetValue(value);
}

//main(stack):
  //0 x 300
  //angle:
    //m_num: 30
    //m_lower: 0
    //m_upper: 359

//0 x 600
//angle2:
  //m_num: 30
  //m_lower: 0
  //m_upper: 359

int main()
{
  CCircNum angle(30, 0, 359);

  //Without CTOR
  CCircNum angle2;
  angle2.SetLimit(0, 359);
  angle2.SetValue(30);

  return 0;
}
