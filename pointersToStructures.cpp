struct Box
{
  int height;
  int width;
}

int main()
{
  Box myBox = {4, 12}; //order matters!

  Foo(myBox);

  cout << myBox.height * myBox.width << endl; // 48

  Foo(&myBox);

  cout << myBox.height * myBox.width << endl; // 0

  return 0;
}

// ->  The "arrow operator" dereferences a pointer to a struct
// (class) and gives you access to the numbers

void Foo(Box box)
{
  box.height = 0;
  box.width = 0;
}



void Foo(Box *boxPtr)
{
  //boxPtr->height = 0;
  (*boxPtr).height = 0;

  boxPtr->width = 0;
}
