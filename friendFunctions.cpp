//A non-member function that is granted direct access to private data members in a class declaration
//Put "friend" before the return type in the function header (not implementation)
//Can also go in private section and still compile, but it is recommended to place in the public section

//Old Way:
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

//Function Prototypes
ostream& operator << (ostream &outStream, const CCircNum &rhs);
istream&  operator << (istream &inStream, CCircNum &rhs);


ostream& operator << (ostream &outStream, const CCircNum &rhs)
{
  rhs.DisplayData(outStream);

  return outStream;
}

istream& operator >> (istream &inStream, CCircNum &rhs)
{
  rhs.GetData(inStream);

  return inStream;
}

//New Way:
class CCircNum
{
  private:
    int m_num;
    int m_lower;
    int m_upper;

  public:
    //CTORs
    CCircNum() {m_num = m_lower = m_upper = 0;}
    CCircNum(int value, int lower = 0, int upper = 359);
    CCircNum(const CCircNum &otherObject); 

    // Accessor Functions 
    int GetValue() const{return m_num;} 
    void SetValue(int newVal);
    void SetLimits(int lowVal, int hiVal) {m_lower = lowVal; 
                                           m_upper = hiVal;
                                           SetValue(m_num);} 

    // Member functions 
    void Decrement() {SetValue(m_num - 1);} 
    void Increment() {SetValue(m_num + 1);} 
    void DisplayData(ostream &outStream = cout) const; 
    void GetData(istream &inStream = cin); 

    // Function Prototypes 
    friend ostream& operator<<(ostream &outStream, const CCircNum &rhs); 
    friend istream& operator>>(istream &inStream, CCircNum &rhs);
}; 

ostream& operator<<(ostream &outStream, const CCircNum  &rhs) 
{ 
  outStream << rhs.m_num << " ~ " << rhs.m_lower << " ~ " << rhs.m_upper; 

  return outStream; 
} 

istream& operator>>(istream  &inStream, CCircNum  &rhs) 
{
  int num; 
  int hiVal; 
  int loVal; 
  
  inStream >> num >> loVal >> hiVal; 
 
  // We can assign the values, but it's best to use the member function for 
  // protection 
  // rhs.m_num = num; 
  // rhs.m_lower = loVal; 
  // rhs.m_upper = hiVal; 

  rhs.SetLimits(loVal, hiVal); 
  rhs.SetValue(num); 
  
  return inStream; 
} 
