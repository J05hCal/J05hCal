//Default CTOR
  //Requires no arguments, they're optional
  //If your class has no CTOR, the compiler will create a default CTOR for you (it does nothing)
  //Only 1 default CTOR

//Type Conversion CTOR
  //The first parameter must be a type different than the object being created
  //No limit on the number of type CTORs

//Copy CTOR
  //The first parameter must be a reference to an object of the same type
  //If you do not write a copy CTOR, then the compiler generates one for you
    //It does a member by member copy (Shallow Copy)
  //If there are additional parameters, they must all have default values.
  //Only have one copy CTOR

//EX:
  int main()
  {
    CCircNum angle;              //Default CTOR

    CCircNum angle2(90, 0, 520); //Type CTOR

    CircNum angle3(angle2);      //Copy CTOR
  }

//Default CTOR
CCircNum::CCircNum()
{
  m_lower = 0;
  m_upper = 359;
  m_num = 30;
}

//Type CTOR
CCircNum::CCircNum(int value, int lower, int upper)
{
  m_lower = lower;
  m_upper = upper;
  SetValue(value);
}

//Copy CTOR
CCircNum::CCircNum(CCircNum &obj)
{
  m_lower = obj.m_lower;
  m_upper = obj.m_upper;
  m_num = obj.m_num;
}
