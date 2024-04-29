class CBox
{
  private:
    int m_height;
    int m_width;

  public:
    CBox(){cout << "default\n"; m_width = m_height = 0;}
    CBox(int len) {cout << "conversion\n"; m_width = m_height = len;}
    int GetHeight() const { return m_height;
    void SetHeight(int height) { m_height = height; }
    //...
};

void ShowArea(CBox *boxPtr) // only accepts a pointer (address)
{
  cout << boxPtr->GetHeight() * boxPtr->GetWidth() << endl;
}


int main()
{
  CBox myBox = 5; // CBox myBox(5);

  ShowArea(&myBox);

  CBox *ptr1; // stdout: Conversion 25

  ptr1 = new CBox;

  ShowArea(ptr1);

  CBox *ptr2 = new CBox(7);

  delete ptr1;
  delete ptr2;

  ptr1 = ptr2 = nullptr;

  return 0;
}
