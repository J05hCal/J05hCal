void ShowArea(CBox *boxPtr) // only accepts a pointer (address)
{
  cout << boxPtr->GetHeight() *boxPtr->GetWidth() << endl;
}

int main()
{
  CBox boxes[3];
  CBox *boxPtr;
  int index;

  boxPtr = new CBox[5];

  for(index = 0; index < 5; ++index)
  {
    ShowArea(&boxPtr[index]); // ShowArea(boxPtr + index);
  }

  delete [] boxPtr;
  boxPtr = nullPtr;

  return 0;
}
