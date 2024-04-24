int main()
{
  int *intPtr;
  int intVar;
  int &intRef = intVar;

  intVar = 5;

  intRef = 7;

  intPtr = &intVar;

  *intPtr = 12;

  cout << intVar << ", " << intRef << ", " << *intPtr << endl; //stdout: 12, 12, 12

  cout << intPtr << ", " << &intPtr << ", " << &intRef << endl; //stdout: 0 x 54, 0 x 50, 0 x 54

  int intVar2;

  &intRef = intVar2;

  //&intRef = intVar2; //ERROR!

  //intPtr = &intVar2; //ALLOWED!

  intPtr = new int;

  intPtr = new int[5];
}

//Side Example
int main()
{
  int myInt = 3;

  Foo(myInt);

  return 0;
}

void Foo(int &intOne) //int &intOne = myInt;
{
  intOne = 7;
}
