int main()
{
  int var1 = 5;
  int var2 = 3;

  if(var1 == var2)
  {
    //...
  }

  ++var1;
  --var2;

  return 0;
}

class Numbers
{
  private:
    int nums = 0;
    double nums2 = 0.0;

  public:
    //...
};

int main()
{
  Numbers myNum;
  Numbers yourNum;

  if(myNum == yourNum)
  {
    //...
  }

  ++myNum;
  --yourNum;

  return 0;
}

//Operator Overloading
  //Most operators can be overloaded for classes as either member or non-member functions
  //The function identifier is: operator<>
    //Note: <> The symbol that represents the operator you want to overload(e.g. ++)

//EX: CCircNum
int main()
{
  CCircNum CNum1 = 45;
  CCircNum CNum2(15);

  if (CNum1 == CNum2) //CNum1.operator == (CNum2)
  {
    //...
  }

  if (CNum1.operator == (CNum2))
  {
    //...
  }
}

//Member Function

bool CCircNum::operator == (const CCircNum &rhs)
{
  if (  (m_num == rhs.m_num) //GetValue() == rhs.GetValue()
      &&(m_lower == rhs.m_lower)
      &&(m_upper == rhs.m_upper)
     )
    {
      return true;
    }
    else
  {
    return false;
  }
}

if (CNum1 == CNum2) //operator == (CNum1, CNum2)
{
  //...
}

//Non - Member Function

bool operator == (const CCircNum &lhs, const CCircNum &rhs)
{
  if(  (lhs.GetValue() == rhs.GetValue())
     &&(lhs.GetLowBound() == rhs.GetLowBound())
     &&(lhs.GetUppBound() == rhs.GetUppBound())
    )
  {
    return true;
  }
  else
  {
    return false;
  }
}
