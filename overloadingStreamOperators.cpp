//Overloading Stream Operator

//Cannot be a member function
//The first parameter must be a reference to the stream
//The second parameter must be a reference to the object
//The stream must be returned by reference

class CCircNum
{
  private:
    int m_num;
    int m_lover;
    int m_upper;

  public:
    //CTORs
    CCircNum() {m_num = m_lower = m_upper = 0;}
    CCircNum(int value, int lower = 0, int upper = 359);
    CCircNum(const CCircNum &otherObject);

    //Accessor Functions
    int GetValue() const {return m_num;}
    void SetValue(int newVal);
    void SetLimit(int lowVal, int hiVal) {m_lower = lowVal;
                                          m_upper = hiVal;
                                          SetValue(m_num);}
    //Member functions
    void Decrement() {SetValue(m_num - 1);}
    void Increment() {SetValue(m_num + 1);}
    void DisplayData(ostream &outStream &outStream = cout) const;
    void GetData(istream &inStream = cin);
};

void CCircNum::DisplayData(ostream &outStream) const
{
  outStream << m_num << "~" << m_lower << "~" << m_upper;
}

void CCircNum::GetData(istream &inStream)
{
  int num;
  int hiVal;
  int loVal;

  inStream >> num >> loVal >> hiVal;

  SetLimits(loVal, hiVal);
  SetValue(num);
}
ostream& operator << (ostream &outStream, const CCircNum &rhs)
{
  rhs.DisplayData(outStream);

  //outStream << rhs.GetValue() << "~" << rhs.GetLowBound() << "~"
  //          << rhs.GetUppBound();

  return outStream;
}


istream& operator >> (istream &inStream, CCircNum &rhs)
{
  rhs.GetData(inStream);

  //int num;
  //int hiVal;
  //int loVal;

  inStream >> num >> loVal >> hiVal;
}

int main()
{
  CCircNum cnum1 = 45;
  ofstream outFile("output.txt");
  //

  cnum1.DisplayData();         //Display cout
  cnum1.DisplayData(outFile);  //Write to "output.txt"
  cnum1.DisplayData(cout);

  cout << cnum1;     //operator << (cout, cnum1)
  outFile << cnum1;  //operator << (outFile, cnum1)

  cout << cnum1 << endl;  //operator << (cout, cnum1)
          void << endl;   //operator << (cout, endl);
  
  outFile << cnum1 << cnum2 << endl;  //operator << (outFile, cnum1)
           outFile << cnum2 << endl;  //operator << (outFile, cnum2)
                    outFile << endl;  //operator << (outFile, endl)
                          outFile

  cnum1.GetData();        //Read from cin
  cnum1.GetData(inFile);  //Read from "input.txt"
  cnum1.GetData(cin);

  cin >> cnum1;  //operator >> (cin, cnum1);

  inFile >> cnum1 >> cnum2 >> myInt;

  return 0;
}
